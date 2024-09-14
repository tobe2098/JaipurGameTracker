#ifndef GAME_UTILS_JAIPUR
#define GAME_UTILS_JAIPUR
#include "game_data.h"

void randomize_index_array(int arr[], int size);
void card_sale(struct player_data *player, struct game_data *game, char card_type[], int no_cards);
#endif