#include <stdio.h>
#include <math.h>

int main() {
    int p, result;
    printf("Enter the number of digits:"); // Displaying a message to the user
    scanf("%d", &p); // Reading the value entered by the user from the keyboard and storing it in the variable p
    result = pow(p, 2) - ((p - 2) * 3); // Calculating the result using the given formula
    printf("The number of digits is: %d", result); // Displaying the result on the screen
    return 0;
}
