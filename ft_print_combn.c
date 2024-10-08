// // // version chatgpt

// // #include <unistd.h>

// // void ft_putchar(char c) {
// //     write(1, &c, 1);
// // }

// // void ft_print_combn_recursive(int n, int start, int *arr, int index) {
// //     if (index == n) {
// //         for (int i = 0; i < n; i++) {
// //             ft_putchar(arr[i] + '0');
// //         }

// //         if (arr[0] < (10 - n)) {
// //             ft_putchar(',');
// //             ft_putchar(' ');
// //         }
// //         return;
// //     }

// //     for (int i = start; i <= (10 - n + index); i++) {
// //         arr[index] = i;
// //         ft_print_combn_recursive(n, i + 1, arr, index + 1);
// //     }
// // }

// // void ft_print_combn(int n) {
// //     if (n <= 0 || n >= 10) {
// //         return;
// //     }

// //     int arr[n];
// //     ft_print_combn_recursive(n, 0, arr, 0);
// // }

// // int main(int argc, char *argv[]) {
// //     if (argc == 2) {
// //         int n = atoi(argv[1]);
// //         ft_print_combn(n);
// //         ft_putchar('\n');
// //         return 0;
// //     } else {
// //         ft_putchar('\n');
// //         return 1;
// //     }
// // } version de chat gpt avec plus de demenstration 
// #include <unistd.h> // Inclure la bibliothèque pour ft_putchar

// // Fonction pour afficher un caractère
// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// // Fonction pour vérifier les combinaisons
// int check_array(int *arr, int size) {
//     int i = size - 2;
//     while (i >= 0 && arr[i] == arr[i + 1] - 1) {
//         i--;
//     }
//     return i;
// }

// // Fonction pour réinitialiser le tableau
// void reset_array(int *arr, int size, int index) {
//     int i = index - 1;
//     while (i >= 0 && i < size - 1) {
//         arr[i]++;
//         i++;
//     }
// }

// // Fonction pour afficher les combinaisons
// void print_combination(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         ft_putchar(arr[i] + '0'); // Utilisation de ft_putchar pour afficher un caractère
//     }
//     ft_putchar(',');
//     ft_putchar(' ');
// }

// // Fonction principale
// void ft_print_combn(int n) {
//     int size = n;
//     int comb[size];
//     int index = size - 1;

//     // Initialisation du tableau
//     for (int i = 0; i < size; i++) {
//         comb[i] = i;
//     }

//     // Génération et affichage des combinaisons
//     while (comb[0] <= 10 - size) {
//         print_combination(comb, size);

//         // Vérification et incrémentation
//         if (comb[size - 1] < 9) {
//             comb[size - 1]++;
//         } else {
//             int check = check_array(comb, size);
//             if (check >= 0) {
//                 comb[check]++;
//                 reset_array(comb, size, check + 1);
//             } else {
//                 break;
//             }
//         }
//     }
// }

// // Exemple d'utilisation
// int main() {
//     int n = 4; // Exemple avec n = 4
//     ft_print_combn(n);
//     return 0;
// } my version
#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void	ft_print_combn(int n){
    int arr[], sizes;
    

}




 