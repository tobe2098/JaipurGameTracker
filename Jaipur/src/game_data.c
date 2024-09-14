#include "game_data.h"
void set_seed(struct game_data *game) {
  srand(game->rnd_seed);
  game->bonus_3_arr = { 1, 2, 3, 4, 5, 6 };
  randomize_index_array(game->bonus_3_arr, max_bonus_tokens);
  game->bonus_4_arr = { 1, 2, 3, 4, 5, 6 };
  randomize_index_array(game->bonus_4_arr, max_bonus_tokens);
  game->bonus_5_arr = { 1, 2, 3, 4, 5, 6 };
  randomize_index_array(game->bonus_5_arr, max_bonus_tokens);
}
void initialize_game(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  // Optionally set the random seed in the system
  playerA->no_tokens = 0;
  playerA->camels    = 0;
  playerA->points    = 0;
  playerA->seals     = 0;

  playerB->no_tokens = 0;
  playerB->camels    = 0;
  playerB->points    = 0;
  playerB->seals     = 0;

  game->diamond_ptr = 0;
  game->gold_ptr    = 0;
  game->silver_ptr  = 0;
  game->spice_ptr   = 0;
  game->cloth_ptr   = 0;
  game->leather_ptr = 0;
  game->bonus_3_ptr = 0;
  game->bonus_4_ptr = 0;
  game->bonus_5_ptr = 0;

  printf("Enter a random seed (or press Enter to use default seed 42): ");

  char input[20];
  if (fgets(input, sizeof(input), stdin) != NULL) {
    if (input[0] == '\n') {
      game->rnd_seed = 42;  // Default seed
    } else {
      char *endptr;
      game->rnd_seed = (int)(strtol(input, &endptr, 10) & INT_MAX);
      printf("The following input was ignored: %s\n", endptr);
    }
    printf("Seed set to: %d\n", game->rnd_seed);
  } else {
    game->rnd_seed = 42;  // Default seed if no input
  }
  set_seed(game);
  game->turn_of = 'A' + (rand() & 1);
  printf("Player %c starts this game.\n", game->turn_of);
}
void initialize_round(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  // Optionally set the random seed in the system
  playerA->no_tokens = 0;
  playerA->camels    = 0;
  playerA->points    = 0;

  playerB->no_tokens = 0;
  playerB->camels    = 0;
  playerB->points    = 0;

  game->diamond_ptr = 0;
  game->gold_ptr    = 0;
  game->silver_ptr  = 0;
  game->spice_ptr   = 0;
  game->cloth_ptr   = 0;
  game->leather_ptr = 0;
  game->bonus_3_ptr = 0;
  game->bonus_4_ptr = 0;
  game->bonus_5_ptr = 0;

  printf("Enter a random seed (or press Enter to use default seed 42): ");

  char input[20];
  if (fgets(input, sizeof(input), stdin) != NULL) {
    if (input[0] == '\n') {
      game->rnd_seed = 42;  // Default seed
    } else {
      char *endptr;
      game->rnd_seed = (int)(strtol(input, &endptr, 10) & INT_MAX);
      printf("The following input was ignored: %s\n", endptr);
    }
    printf("Seed set to: %d\n", game->rnd_seed);
  } else {
    game->rnd_seed = 42;  // Default seed if no input
  }
  set_seed(game);
  fprintf("Player %c starts this game.\n", game->turn_of);
}
void print_game_state(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  printf("It is player %c's turn now.\n", game->turn_of);
}
int check_data_integrity(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  NOT FINISHED;
}
void load_game_state(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  FILE *file = fopen(SAVE_FILE, "r");

  if (file != NULL) {
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);

    char *buffer = (char *)malloc(file_size + 1);
    fread(buffer, 1, file_size, file);
    buffer[file_size] = '\0';
    fclose(file);

    // Parse the JSON-like structure
    sscanf(buffer,
           "{\"playerA\": {\"tokens\": %d, \"camels\": %d, \"points\": %d, \"seals\": %d}, "
           "\"playerB\": {\"tokens\": %d, \"camels\": %d, \"points\": %d, \"seals\": %d}, "
           "\"turn_of\": %c,\"diamond_ptr\": %d, \"gold_ptr\": %d, \"silver_ptr\": %d, \"spice_ptr\": %d, "
           "\"cloth_ptr\": %d, \"leather_ptr\": %d, \"rnd_seed\": %d, "
           "\"bonus_3_ptr\": %d, \"bonus_4_ptr\": %d, \"bonus_5_ptr\": %d}",
           &playerA->no_tokens, &playerA->camels, &playerA->points, &playerA->seals, &playerB->no_tokens, &playerB->camels,
           &playerB->points, &playerB->seals, &game->turn_of, &game->diamond_ptr, &game->gold_ptr, &game->silver_ptr, &game->spice_ptr,
           &game->cloth_ptr, &game->leather_ptr, &game->rnd_seed, &game->bonus_3_ptr, &game->bonus_4_ptr, &game->bonus_5_ptr);

    free(buffer);
    set_seed(game);
    if (is_round_over(playerA, playerB, game)) {
      round_over(playerA, playerB, game);
      initialize_round(playerA, playerB, game);
    }
    if (is_game_over(playerA, playerB, game)) {
      game_over(playerA, playerB, game);
      initialize_game(playerA, playerB, game);
    }
  } else {
    // Initialize default game state if no save file exists
    initialize_game(playerA, playerB, game);
  }
}
void save_game_state(const struct player_data *playerA, const struct player_data *playerB, const struct game_data *game) {
  FILE *file = fopen(SAVE_FILE, "w");
  if (file == NULL) {
    perror("Unable to save game state");
    return;
  }

  // Write the JSON-like format for the game state
  fprintf(file, "{\n");
  fprintf(file, "  \"playerA\": {\"tokens\": %d, \"camels\": %d, \"points\": %d, \"seals\": %d},\n", playerA->no_tokens, playerA->camels,
          playerA->points, playerA->seals);
  fprintf(file, "  \"playerB\": {\"tokens\": %d, \"camels\": %d, \"points\": %d, \"seals\": %d},\n", playerB->no_tokens, playerB->camels,
          playerB->points, playerB->seals);
  fprintf(file, "  \"turn_of\": %c,\n", game->turn_of);
  fprintf(file, "  \"diamond_ptr\": %d,\n", game->diamond_ptr);
  fprintf(file, "  \"gold_ptr\": %d,\n", game->gold_ptr);
  fprintf(file, "  \"silver_ptr\": %d,\n", game->silver_ptr);
  fprintf(file, "  \"spice_ptr\": %d,\n", game->spice_ptr);
  fprintf(file, "  \"cloth_ptr\": %d,\n", game->cloth_ptr);
  fprintf(file, "  \"leather_ptr\": %d,\n", game->leather_ptr);
  fprintf(file, "  \"rnd_seed\": %d,\n", game->rnd_seed);
  fprintf(file, "  \"bonus_3_ptr\": %d,\n", game->bonus_3_ptr);
  fprintf(file, "  \"bonus_4_ptr\": %d,\n", game->bonus_4_ptr);
  fprintf(file, "  \"bonus_5_ptr\": %d\n", game->bonus_5_ptr);
  fprintf(file, "}\n");

  fclose(file);
}

void process_arguments(struct player_data *playerA, struct player_data *playerB, struct game_data *game, int argc, char *argv[]) {
  if (argc < 2) {
    printf("No command provided.\n");
    return;
  }
  int                 turn_happened = 0;
  struct player_data *curr_player;
  if (game->turn_of == 'A') {
    curr_player = playerA;
  } else if (game->turn_of == 'B') {
    curr_player = playerB;
  } else {
    printf("Data is corrupted.\n");
    initialize_game(playerA, playerB, game);
    return;
  }

  if (strncmp(argv[1], "--camels", 10) == 0) {
    if (argc < 3) {
      printf("Lacking a number of camels.\n");
      return;
    }
    int camels = atoi(argv[2]);
    if (camels < 1 || (playerA->camels + playerB->camels + camels > 11)) {
      printf("Invalid number of camels.\n");
      return;
    }
    curr_player->camels += camels;
    turn_happened += 1;
  } else if (strcmp(argv[1], "--sell") == 0) {
    if (argc < 4) {
      printf("Too few arguments.\n");
      return;
    }
    char *goods    = argv[2];
    int   no_goods = atoi(argv[3]);
    card_sale(curr_player, game, goods, no_goods);
    turn_happened += 1;
  } else if (strcmp(argv[1], "--market") == 0) {
    turn_happened += 1;
  } else if (strcmp(argv[1], "--state") == 0) {
    print_game_state(playerA, playerB, game);
  } else if (strcmp(argv[1], "--reset") == 0) {
    initialize_game(playerA, playerB, game);
  } else {
    printf("Unknown command: %s\n", argv[1]);
  }
  if (turn_happened) {
    game->turn_of = (((game->turn_of - 'A') + 1) & 1) + 'A';
  }
  print_game_state(game, playerA, playerB);
}

void card_sale(struct player_data *player, struct game_data *game, char card_type[], int no_cards) { }

int is_game_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  return 0;
}

int is_round_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game) {
  return 0;
}

void game_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game) { }

void round_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game) { }
