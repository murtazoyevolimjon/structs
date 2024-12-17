#include <stdio.h>

struct Author {
    char name[100];
    int birth_year;
};
struct Book {
    char title[100];
    float price;
    int published_year;
    struct Author author;
};
int main() {
    
    struct Book books[] = {
        {"Book A", 25.0, 2021, {"Alex Black", 1990}},
        {"Book B", 30.0, 2023, {"Mary White", 1985}},
        {"Book C", 15.0, 2018, {"John Green", 1975}}
    };
    int n = sizeof(books) / sizeof(books[0]);
    printf("1980-yildan keyin tug'ilgan mualliflarning kitoblari:\n");
    printf("Title           | Price | Published Year | Author Name | Author Birth Year\n");
    printf("----------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (books[i].author.birth_year > 1980) {
            printf("%-15s | %5.2f | %14d | %11s | %17d\n",
                   books[i].title, 
                   books[i].price, 
                   books[i].published_year, 
                   books[i].author.name, 
                   books[i].author.birth_year);
        }
    }

    return 0;
}