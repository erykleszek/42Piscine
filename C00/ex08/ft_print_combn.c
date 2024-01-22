#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to print the array of digits if it represents a valid combination
void print(int *tab, int n) {
    int i;
    bool low;

    i = 1;
    low = 1;
    // Check if the array is in ascending order
    while (i < n) {
        if (tab[i - 1] >= tab[i])
            low = 0;
        i++;
    }
    // If in ascending order, print the combination
    if (low) {
        i = 0;
        while (i < n)
            ft_putchar(tab[i++] + 48);
        // Check if the first digit is less than (10 - n)
        if (tab[0] < (10 - n)) {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

// Function to print all combinations of n digits in ascending order
void ft_print_combn(int n) {
    int i;
    int tab[n];

    i = 0;
    // Initialize the array with zeros
    while (i < n)
        tab[i++] = 0;

   
