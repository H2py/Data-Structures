#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS (4)
#define NUM_RANKS (13)

int main(void)
{
    bool in_hand[NUM_SUITS] [NUM_RANKS] = {false, };
    int num_cards;
    int rank;
    int suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                             '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'s', 'c', 'd', 'h'};

    srand((unsigned) time(NULL));
    
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;  
        rank = rand() % NUM_RANKS;  
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            --num_cards;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    int i, j;
    int *p;
    int *q;

    p = &i;
    q = p;


    return 0;
}