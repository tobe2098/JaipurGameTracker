#ifndef GAME_UTILS_JAIPUR
#define GAME_UTILS_JAIPUR
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define INT_MAX   2147483647
#include <stdio.h>
#include <stdlib.h>
void randomize_index_array(int arr[], int size);
void print_array_goods(char* name, const int* array, int size, int cutoff);
void print_winning_trophy(char player);
void print_welcome_message();
void print_new_round_message();
#endif