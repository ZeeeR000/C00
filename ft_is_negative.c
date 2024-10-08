// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// void ft_is_negative(int n) {
    
//     n ='P','N';
//     if(n<0){
//         ft_putchar('N');
//     }else {
//         ft_putchar('P');
//     }
// }

// int main(){
//     int n = -5;
//     ft_is_negative(n);
//     return 0;
// }
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
}

int main() {
    int n = -5; // Remplacez cette valeur par celle que vous souhaitez tester
    ft_is_negative(n);
    return 0;
}
