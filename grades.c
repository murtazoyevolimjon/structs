#include <stdio.h>

struct Subject {
    char name[100];
};

struct Score {
    float score;
};

struct Student {
    char first_name[100];
    char last_name[100];
    struct Subject subject;
    struct Score score;
};

int main() {

    struct Student students[] = {
        {"John", "Doe", {"Math"}, {95}},
        {"Jane", "Smith", {"Physics"}, {90}},
        {"Emily", "Davis", {"History"}, {85}},
        {"Michael", "Johnson", {"Math"}, {80}},
    };

    int n = sizeof(students) / sizeof(students[0]);

    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\n");
    printf("First Name | Last Name | Subject Name  | Score\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        if (students[i].score.score > 80) {
            printf("%10s | %9s | %13s | %.1f\n",
                   students[i].first_name,
                   students[i].last_name,
                   students[i].subject.name,
                   students[i].score.score);
        }
    }

    return 0;
}