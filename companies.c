#include <stdio.h>
#include <string.h>

struct Company {
    char name[50];
    char location[100];
};

struct Product {
    char name[100];
    float price;
    int quantity;
    struct Company company;
};

int main() {
    
    struct Product products[] = {
        {"Product 1", 50.0, 100, {"Company A", "USA"}},
        {"Product 2", 30.0, 200, {"Company B", "USA"}},
        {"Product 3", 40.0, 150, {"Company C", "UK"}},
        {"Product 4", 60.0, 120, {"Company D", "Germany"}}
    };


    int n = sizeof(products) / sizeof(products[0]);
    printf("AQShda ishlab chiqarilgan mahsulotlar:\n");
    printf("Name         | Price | Quantity | Company Name | Company Location\n");

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {

        if (strcmp(products[i].company.location, "USA") == 0) {
            
            printf("%-12s | %-5.2f | %-8d | %-12s | %-15s\n",
                   products[i].name,
                   products[i].price,
                   products[i].quantity,
                   products[i].company.name,
                   products[i].company.location);
        }
    }
    return 0;
}