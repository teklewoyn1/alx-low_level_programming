#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming \:\(\n");

        i = 0;

        while (i < 10)
        {
                if(i==0){
                  printf("Infinite loop avoided! \\o/\n");
                }else{
                    putchar(i);    
                }
                
        }
          
        

        return (0);
}
