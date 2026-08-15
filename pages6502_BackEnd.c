//page6502.c ---  prints 256 pages of 256 memory addresses 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 65536         //Represents 65536 bytes (64k) of memory
#define PAGE 256 

int main(void)
{
    time_t now;
    time(&now);
    size_t fa_page[N];              //size_t is a more dynamic unsigned data type 
    size_t paged, i, x, j;          //I could have used unsigned long instead of size_t
    printf("Today: %s\n", ctime(&now) );
    printf("Press any letter to quit\n");
    printf("Enter the page you want to display"
            " from page 0 to page 255:____\b\b\b\b");

    while(scanf("%3ld", &paged) == 1)        //check the return value of scanf()
    {
         fpurge(stdin);
        switch(paged)   
        {
              case 0: printf("\n%75s\n","The famous Zero Page");        //If 0 is entered the text is display
                break;
              case 1: printf("\n%78s\n","The infamous Stack Page");         //If 1 is entered the text is display
                break;
              case 2: printf("\n%85s\n","Program usually starts at $0200");     //If 2 is entered the text is display
                break;
              case 255: printf("\n%68s\n","The last page");         //If 255 is entered the text is display
                break; 
              default: 
                break;
        }
        if(paged >= 256)            //Test if the input is within range 
        {
            printf("Range is 0 ---> 255:____\b\b\b\b");
            continue;
        }
        for(i = 1; i < N - 1; i++)          //Fill the array with 65536 bytes (64k) of memory
            fa_page[i] = (paged * i) / PAGE + i;  
            ;
        //Nested for loop to display vertical and horizontal rows 
            for(x = 0; x < PAGE; x += 16)      
            {   
                    // Display interger value
                    for(j = 0; j < PAGE / 16; j++)    
                    {                    
                        fa_page[i] = x + j + (paged * PAGE);
	                     printf("%zu\t", fa_page[i]);
                    }
                putchar('\n');                    
                    // Display hexadecimal value
                    for(j = 0; j < PAGE / 16; j++)
                    {                    
                        fa_page[i] = x + j + (paged * PAGE);
	                     printf("$%04lX\t", fa_page[i]);
                    }
                        
                putchar('\n');
            }
            
                printf("%85s%lu\n\nEnter the page you want to check:____\b\b\b\b",
                        "Currently your are on page n°", paged);
    }  

    return 0;
}
