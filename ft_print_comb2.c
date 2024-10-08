// // // #include <unistd.h>

// // // void ft_putchar(char c){
// // //     write(1, &c, 1);
// // // }

// // // void ft_print_comb2(void){
// // //     int a, b;
// // //     char d=' ';
// // //     char c=','
// // //     for(a=00; a<=98; a++) {
        
        
// // //         for(b=01; b<=99; b++) {
           
            
// // //             if(!(a!=98 && b!=99)){
// // //                 ft_putchar(a);
// // //                 ft_putchar(c);
// // //                 ft_putchar(b);
// // //                 ft_putchar(d);
// // //             }
// // //             b++;
// // //         }
// // //         a++;

// // //     }
// // // }
// // // int main(){
// // //     ft_print_comb2();
// // //     return 0;
// // // }
// // #include <unistd.h>

// // void ft_putchar(char c){
// //     write(1, &c, 1);
// // }

// // void ft_print_comb2(void){
// //     int a, b;
// //     char space = ' ';
// //     char comma = ',';

// //     a = 0;
// //     while (a <= 98) {
// //         b = a + 1;
// //         while (b <= 99) {
// //             ft_putchar(a / 10 + '0');
// //             ft_putchar(a % 10 + '0');
// //             ft_putchar(space);
// //             ft_putchar(b / 10 + '0');
// //             ft_putchar(b % 10 + '0');

// //             if (!(a == 98 && b == 99)) {
// //                 ft_putchar(comma);
// //                 ft_putchar(space);
// //             }

// //             b++;
// //         }
// //         a++;
// //     }
// //     ft_putchar('\n');
// // }

// // int main(){
// //     ft_print_comb2();
// //     return 0;
// // }
// // version de moi 
// #include <unistd.h>
// void ft_putchar(char c){
//     write(1, &c, 1);
// }

// void ft_print_comb2{
//     for(a1=0; a1<=9; a1++){
//         for(a2=0; a2<=8; a2++){
//             for(b1=0; b1<=9; b1++){
//                 for(b2=1; b2<=9; b2++){
//                     ft_putchar(a1 +'0');
//                     ft_putchar(a2 + '0');
//                     ft_putchar(' ');
//                     ft_putchar(b1+'0');
//                     ft_putchar(b2 +'0');
//                 }

//                 if(a1!=9 && a2!=8 && b1!=9 && b2!=9){
//                     ft_putchar(',')
//                 }
//             }
//         }
//     }
// }

// int main(){
//     ft_print_comb2();
//     return 0;
// }
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2(void) {
    int a1, a2, b1, b2;

    for (a1 = 0; a1 <= 9; a1++) {
        for (a2 = 0; a2 <= 8; a2++) {
            for (b1 = 0; b1 <= 9; b1++) {
                for (b2 = 1; b2 <= 9; b2++) {
                    ft_putchar(a1 + '0');
                    ft_putchar(a2 + '0');
                    ft_putchar(' ');
                    ft_putchar(b1 + '0');
                    ft_putchar(b2 + '0');

                    if (!(a1 == 9 && a2 == 8 && b1 == 9 && b2 == 9)) {
                        ft_putchar(',');
                        
                    }
                }
            }
        }
    }
}

int main() {
    ft_print_comb2();
    return 0;
}
