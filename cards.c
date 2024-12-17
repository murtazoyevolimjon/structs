#include <stdio.h>
#include <string.h>

struct Card {
    char card_holder_name[100];
    char card_number[100];
    char expiry_date[100];
    int cvv;
};

int main() {

    struct Card cards[] = {
        {"John Doe", "1234 5678 9012 3456", "12/25", 123},
        {"Jane Smith", "2345 6789 0123 4567", "11/24", 456}
    };

    int n = sizeof(cards) / sizeof(cards[0]);

    printf("Amal qilayotgan kartalar:\n");
    printf("Card Holder Name | Card Number         | Expiry Date | CVV\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%16s | %20s | %11s | %d\n", 
               cards[i].card_holder_name, 
               cards[i].card_number, 
               cards[i].expiry_date, 
               cards[i].cvv);
    }
    return 0;
}