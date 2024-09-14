#ifndef PLAYER_INFO_HEADER_JAIPUR
#define PLAYER_INFO_HEADER_JAIPUR
#include "game_constants.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SAVE_FILE "jaipur_game_state.json"

typedef struct player_data {
    int no_tokens;
    int camels;
    int points;
    int seals;
};

typedef struct game_data {
    char turn_of;

    int diamond_ptr;
    int gold_ptr;
    int silver_ptr;
    int spice_ptr;
    int cloth_ptr;
    int leather_ptr;

    int rnd_seed;
    int bonus_3_ptr;
    int bonus_4_ptr;
    int bonus_5_ptr;

    int bonus_3_arr[6];
    int bonus_4_arr[6];
    int bonus_5_arr[6];

    int finished_counter;
};

void set_seed(struct game_data *game, int seed);
void initialize_game(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void initialize_round(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void print_game_state(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
int  check_data_integrity(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void load_game_state(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void save_game_state(const struct player_data *playerA, const struct player_data *playerB, const struct game_data *game);
void process_arguments(struct player_data *playerA, struct player_data *playerB, struct game_data *game, int argc, char *argv[]);
void card_sale(struct player_data *player, struct game_data *game, char card_type[], int no_cards);
int  is_game_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
int  is_round_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void game_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void round_over(struct player_data *playerA, struct player_data *playerB, struct game_data *game);

#endif