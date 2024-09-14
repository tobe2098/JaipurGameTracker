#ifndef PLAYER_INFO_HEADER_JAIPUR
#define PLAYER_INFO_HEADER_JAIPUR
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

    int finished_counter;
};

void load_game_state(struct player_data *playerA, struct player_data *playerB, struct game_data *game);
void save_game_state(const struct player_data *playerA, const struct player_data *playerB, const struct game_data *game);
void process_arguments(struct player_data *playerA, struct player_data *playerB, struct game_data *game, int argc, char *argv[]);

#endif