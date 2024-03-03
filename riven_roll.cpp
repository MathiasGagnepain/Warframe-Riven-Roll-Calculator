
#include <iostream>

int main() {
    int input;
    int kuvaCost = 900;
    int result = 0;
    std::cout << "Enter the number of rolls: ";
    std::cin >> input;

    printf("==============================\n");
    int i = 1;
    while (i <= input) {
        result += kuvaCost;
        if (i > 1) {
            result += 100*(i-1);
        }
        i++;
    }
    printf("Total Kuva cost: %d\n", result);
    printf("==============================\n");

    return 0;
}