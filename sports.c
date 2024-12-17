#include <stdio.h>
#include <string.h>


struct Stadium {
    char name[100];
    int capacity;
};

struct Team {
    char team_name[100];
    char coach[100];
    int players_count;
    int founded_year;
    struct Stadium stadium;
};
int main() {

    struct Team teams[] = {
        {"Team A", "Coach A", 11, 1950, {"Stadium A", 50000}},
        {"Team B", "Coach B", 15, 1955, {"Stadium B", 60000}},
        {"Team C", "Coach C", 18, 1070, {"Stadium C", 45000}},
        {"Team D", "Coach D", 20, 2000, {"Stadium D", 40000}}
    };

    int n = sizeof(teams) / sizeof(teams[0]);
    struct Team oldest_team = teams[0];

    for (int i = 1; i < n; i++) {

        if (teams[i].founded_year < oldest_team.founded_year) {
            oldest_team = teams[i];
        }
    }

    printf("Eng eski jamoa:\n");
    printf("Team Name    | Coach       | Players Count | Founded Year | Stadium Name\n");
    printf("----------------------------------------------------------------------\n");
    printf("%11s | %10s | %13d | %12d | %13s\n",
           oldest_team.team_name,
           oldest_team.coach,
           oldest_team.players_count,
           oldest_team.founded_year,
           oldest_team.stadium.name);


    return 0;
}