#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

// void ft_putnbr(int nb)//2147483648
// {
//     long long nbr = nb;
//     if(nbr < 0){
//         ft_putchar('-');
//         nbr *= -1;
        
//     }
//     if(nbr < 10){
//         ft_putchar(nbr+48);
//     }else{
//         ft_putnbr(nbr/10);
//         ft_putnbr(nbr%10);
//     }
// }

// void ft_putnbr(int nb)
// {
//     long long nbr = nb;
//     if(nbr<0)
//     {
//         ft_putchar('-');
//         nbr*=-1;
        
//     }if(nbr<10)
//     {
//         ft_putchar(nbr+'0');
//     }else{
//         ft_putnbr(nbr/10);
//         ft_putnbr(nbr%10);
//     }

// }
// void ft_putnbr(int nb)

// {
//     long long nbr =nb;
//     if(nbr<0)
//     {
//         ft_putchar('-');
//         nbr*=-1;
        
//     }if(nbr<10)
//     {
//         ft_putchar(nbr +48);
//     }else
//     {
//         ft_putnbr(nbr/10);
//         ft_putnbr(nbr%10);
//     }

    
// }

void ft_putnbr(int nb)
{

    if(nb<0)
    {
        ft_putchar('-');
        nb*=-1;
        

    }
    if(nb<10)
    {
         ft_putchar(nb+48);
         
    }else{
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

int main()
{
    
    ft_putnbr(20);


}