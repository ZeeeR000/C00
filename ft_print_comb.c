// // #include <unistd.h>
// // void ft_putchar(char c){
// //     write(1, &c, 3),
// // }
// // void ft_print_comb(void){
// //     char d1, d2, d3;
// //     d1='0';
// //     d2=d1+'1';
// //     d3=d2+'1';
// //     while(d1<='7'){
// //         ft_putchar(d1);
// //         while(d2<='8'){
// //             ft_putchar(d2);
// //             while(d3<='9'){
// //                 ft_putchar(d3);
// //                 if(!(d1 == '7' && d2 == '8' && d3 == '9')){
// //                   ft_putchar(',');
// //                   ft_putchar(' ');
                  
// //                 }
// //                 d3++;
// //             }
// //             d2++;
            
// //         }
// //         d1++;
// //     }
    

// // }
// // int main(){
// //     ft_print_comb();
// //     return 0;
// // }
// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// void ft_print_comb(void) {
//     char d1, d2, d3;

//     d1 = '0';
//     while (d1 <= '7') {
//         d2 = d1 + 1;
//         while (d2 <= '8') {
//             d3 = d2 + 1;
//             while (d3 <= '9') {
//                 ft_putchar(d1);
//                 ft_putchar(d2);
//                 ft_putchar(d3);

//                 if (!(d1 == '7' && d2 == '8' && d3 == '9')) {
//                     ft_putchar(',');
//                     ft_putchar(' ');
//                 }

//                 d3++;
//             }
//             d2++;
//         }
//         d1++;
//     }

//     ft_putchar('\n');
// }

// int main() {
//     ft_print_comb();
//     return 0;
// }MY VERSION

// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1); 
    
// }

// void ft_print_comb(void) {
//     char A, B, C;
//     A=0;
//     while(A<='7'){
//         B = A + 1;
//         while(B<='8'){
//             C = B + 1;
//             while(C<='9'){
//                 ft_putchar(A + '0');
//                 ft_putchar(B + '0');
//                 ft_putchar(C + '0');
//                 if(!( A=='7' && B=='8' && C=='9')){
//                     ft_putchar(',');
//                     ft_putchar(' ');
//                 }
//                 C++;


//             }
//             B++;
//         }
//         A++;
//     }
// }
    

// int main(){
//     ft_print_comb();
    
//     return 0;
// } corriger
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    char A, B, C;
    A = '0';
    
    while (A <= '7') {
        B = A + 1;
        while (B <= '8') {
            C = B + 1;
            while (C <= '9') {
                ft_putchar(A);
                ft_putchar(B);
                ft_putchar(C);

                if (!(A == '7' && B == '8' && C == '9')) {
                    ft_putchar(',');
                    ft_putchar(' ');
                }

                C++;
            }
            B++;
        }
        A++;
    }
}

int main() {
    ft_print_comb();
    return 0;
}


