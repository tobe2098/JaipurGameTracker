#include "game_data.h"

int main(int argc, char *argv[]) {
  if (argc == 2 && strncmp(argv[1], "--help", 6)) {
    print_help();
    return 0;
  }
  struct player_data playerA, playerB;
  struct game_data   game;

  // Load the previous game state from the JSON file
  load_game_state(&playerA, &playerB, &game);

  // Process command-line arguments (e.g., "take_camel", "sell_goods", "draw_from_deck")
  process_arguments(&playerA, &playerB, &game, argc, argv);

  // Save the updated state back to the JSON file
  save_game_state(&playerA, &playerB, &game);

  return 0;
}