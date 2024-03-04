
#include <iostream>
#include <conio.h>
#include "riven_roll.h"
#include <cstdlib>

int main() {
    bool running = true;
    while (running) {
        system("cls");
        int input;
        printf("=========================\n");
        printf("| Riven Roll Calculator |\n");
        printf("=========================\n");
        printf("Choose an Option:\n");
        printf("1. Calculate Kuva Cost\n");
        printf("2. Exit\n");
        printf("=========================\n");
        std::cout << "Enter you choice: ";
        std::cin >> input;
        system("cls");

        switch (input)
        {
        case 1:
            calculCost();
            break;
        
        default:
            running = false;
            break;
        }
    }

    return 0;
}

void calculCost(){
    int result = 0;
    int rollsNb;
    std::cout << "Enter the number of rolls: ";
    std::cin >> rollsNb;

    printf("==============================\n");
    int i = 1;
    while (i <= rollsNb && i < 10) {
        result += ROLL_COSTS[i-1];
        printf("Roll %d: %d\n", i, ROLL_COSTS[i-1]);
        i++;
    }
    if (rollsNb >= 10) {
        result += (rollsNb-9)*ROLL_COSTS[9];
        printf("Roll %s: %d\n", "10+", ROLL_COSTS[9]);
    }
    printf("Total Kuva cost: %d\n", result);
    printf("==============================\n");
    printf("Press any key to continue...");
    _getch();
    return;
}