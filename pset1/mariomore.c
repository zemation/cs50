/*******************************************
More complicated version of mario less. This
version creates two pyramids with a gap based
on user input!
*******************************************/

#include <cs50.h>
#include <stdio.h>
//cs50 - pset1 - mario (more comfortable)

int main(void)
{
    int height; //set variable for user input
    
    do //set loop for validating user input 
    {
        printf("How high should we make the pyramid?");
        height = get_int();  //grab user input 
    }
    while (height < 0 || height > 23); //verify input is integer from 0 to 23.  

   for (int i = 1; i <= height; i++)
    {
        for (int row = 0; row < height; row++)
        {
            if (height - row <= i) //loop to determine hashes or spaces per row 
            {
                printf("#"); //print hashes 
            }
            else
            {
                printf(" "); //print spaces
            }
        }
        printf("  ");
        
        for (int row = height - i; row < height; row++)
        {
            printf("#");
        }
        
        printf("\n"); // print new line
    }
}
