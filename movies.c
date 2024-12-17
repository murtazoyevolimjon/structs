#include <stdio.h>
#include <string.h>


struct Genre {
    char name[100];
    char description[100];
};

struct Movie {
    char name[100];
    float rating;
    int release_year;
    struct Genre genre;
};

int main() {


    struct Movie movies[] = {
        {"Movie A", 8.5, 2022, {"Action", "Action-packed thriller"}},
        {"Movie B", 9.0, 2023, {"Action", "High-octane adventure"}},
        {"Movie C", 14.5, 2001, {"Drama", "Emotional and inspiring story"}},
        {"Movie D", 10.0, 2010, {"Comedy", "Light-hearted and funny"}},
    };

    int n = sizeof(movies) / sizeof(movies[0]);

    printf("\"Action\" janridagi kinolar:\n");
    printf("Name           | Rating | Release Year | Genre Name  | Genre Description\n");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {

        if (strcmp(movies[i].genre.name, "Action") == 0) {

            printf("%-15s | %-6.1f | %-12d | %-11s | %-20s\n",
                   movies[i].name,
                   movies[i].rating,
                   movies[i].release_year,
                   movies[i].genre.name,
                   movies[i].genre.description);
        }
    }


    return 0;
}