#include "Animal.h"

int main()
{
    char *buffer = NULL;
    buffer = malloc(1000);
    while(print_main_menu() && readline(0, &buffer, 260))
    {
        if(my_atoi(buffer) == 1)
            while(!add_animal());
        else if(my_atoi(buffer) == 2)
           while(!uptade_animal());
        else 
            my_printf("Yanlis komut girdiniz. Lutfen tekrar deneyiniz\n");
    }
}   
