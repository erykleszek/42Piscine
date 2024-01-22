#include <unistd.h>
#include <stdbool.h>

// Function to output a single character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to write the combination of two two-digit numbers and add a comma and space if it's not the last combination
void ft_write_comb(int a, int b, bool last) {
    // Print the first digit of the first two-digit number
    ft_putchar(48 + a / 10);

    // Print the second digit of the first two-digit number
    ft_putchar(48 + a % 10);

    // Print a space character to separate the two two-digit numbers
    ft_putchar(' ');

    // Print the first digit of the second two-digit number
    ft_putchar(48 + b / 10);

    // Print the second digit of the second two-digit number
    ft_putchar(48 + b % 10);

    // If it's the last combination, add a comma and a space
    if (last) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

// Function to print all combinations of two two-digit numbers
void ft_print_comb2(void) {
    int a;
    int b;
    bool last;

    // Iterate through the first two-digit number (a)
    a = 0;
    while (a <= 99) {
        // Iterate through the second two-digit number (b)
        b = a + 1;
        while (b <= 99) {
            // Check if it's the last combination
            last = !(a == 98 && b == 99);

            // Call the function to write and print the combination
            ft_write_comb(a, b, last);

            // Move to the next value of b
            b++;
        }

        // Move to the next value of a
        a++;
    }
}
