#include <stdio.h>

typedef struct {
    char model[50];
    char brand[50];
    int price;
    int year;
} Car;
int main() {
    
    Car cars[] = {
        {"Camry", "Toyota", 30000, 2020},
        {"Model S", "Tesla", 80000, 2022},
        {"Rolls Royce", "Rolls", 150000, 2021},
        {"Civic", "Honda", 25000, 2019}
    };
    int n = sizeof(cars) / sizeof(cars[0]); 
    Car maxCar = cars[0]; 
    
    for (int i = 1; i < n; i++) {
        if (cars[i].price > maxCar.price) {
            maxCar = cars[i];
        }
    }
    
    printf("Eng qimmat mashina:\n");
    printf("Model        | Brand      | Price  | Year\n");
    printf("-----------------------------------------\n");
    printf("%12s | %10s | %6d | %4d\n", 
           maxCar.model, maxCar.brand, maxCar.price, maxCar.year);
    return 0;
}