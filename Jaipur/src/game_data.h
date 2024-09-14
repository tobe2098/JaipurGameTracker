#ifndef PLAYER_INFO_HEADER_JAIPUR
#define PLAYER_INFO_HEADER_JAIPUR

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

void load_game_state(struct player_data *player1, struct player_data *player2, struct game_data *game);
void save_game_state(const struct player_data *player1, const struct player_data *player2, const struct game_data *game);

#endif