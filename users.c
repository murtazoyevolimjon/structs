#include <stdio.h>

struct User
{
    char first_name[100];
    char last_name[100];
    int birth_year;
    char location[100];
    char phone[100];
};

int main(){
    int a;
    printf("nechta odam kiritasiz: "); scanf("%d", &a);

    struct User users[a];
    for(int i; i < a; i++){

        printf("First name: "); scanf("%s", users[i].first_name);
        printf("Last name: "); scanf("%s", users[i].last_name);
        printf("Birth year: "); scanf("%d", &users[i].birth_year);
        printf("Location: "); scanf("%s", users[i].location);
        printf("Phone: "); scanf("%s", users[i].phone);

    }
    printf("Foydalanuvchilar jadvali:\nFirst name   |  Last name |  Birth year |  Location | Phone\n--------------------------------------------------------------------------\n");

    for (int i = 0; i < a; i++){

        printf("%13s", users[i].first_name);
        printf("%13s", users[i].last_name);
        printf("%13s", users[i].birth_year);
        printf("%13s", users[i].location);
        printf("%13s", users[i].phone);

    
}

return 0;

}
