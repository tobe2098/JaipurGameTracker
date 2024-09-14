#ifndef PLAYER_INFO_HEADER_JAIPUR
#define PLAYER_INFO_HEADER_JAIPUR
#include "game_constants.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SAVE_FILE "jaipur_game_state.json"

typedef struct {
    int points;
    int camels;
    int no_bonus_tokens;
    int no_goods_tokens;
    int seals;
} player_data;

typedef struct {
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
} game_data;

void set_seed(game_data *game);
void initialize_game(player_data *playerA, player_data *playerB, game_data *game);
void initialize_round(player_data *playerA, player_data *playerB, game_data *game);
void print_game_state(player_data *playerA, player_data *playerB, game_data *game);
int  check_data_integrity(player_data *playerA, player_data *playerB, game_data *game);
void set_finished_resources(game_data *game);
int  load_game_state(player_data *playerA, player_data *playerB, game_data *game);
void save_game_state(const player_data *playerA, const player_data *playerB, const game_data *game);
void print_help();
void process_arguments(player_data *playerA, player_data *playerB, game_data *game, int argc, char *argv[]);
void card_sale(player_data *player, game_data *game, char card_type[], int no_cards);
int  is_game_over(player_data *playerA, player_data *playerB, game_data *game);
int  is_round_over(player_data *playerA, player_data *playerB, game_data *game);
void game_over(player_data *playerA, player_data *playerB, game_data *game);
void round_over(player_data *playerA, player_data *playerB, game_data *game);

#endif