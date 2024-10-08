#include <unistd.h>

void ft_putchar(char c) {
    c = 'C'; // Assurez-vous d'attribuer une valeur à la variable c
    write(1, &c, 1);
}

int main() {
    ft_putchar('C'); // Vous devez passer un caractère à la fonction ft_putchar
    return 0;
}
