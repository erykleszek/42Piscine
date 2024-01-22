#include <unistd.h>

// Function to print a single character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to print an integer
void ft_putnbr(int nb) {
    // Handling the case when nb is the smallest possible value for the int type
    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    // Handling the case when nb is negative
    else if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    // Handling the case when nb is greater than 9
    else if (nb > 9) {
        ft_putnbr(nb / 10); // Print the tens digit
        ft_putnbr(nb % 10); // Print the ones digit
    }
    // Handling the case when nb is a single-digit number
    else
        ft_putchar(nb + 48); // Print the digit as an ASCII character
}
