/*********************************
 - cs50 Problem Set 1 water.c
Program to determine how many 
bottles of water one used based
on length of shower!!!
**********************************/

#include <cs50.h>
#include <stdio.h>
//cs50 - pset 1 - water

int main(void)
{
    printf("How many minutes was your shower? ");
    int minutes = get_int();
    int x = minutes * 12;
    if (minutes < 0)
    {
        printf("This number is in valid.\n");    
    }
    else
    {
        printf("Your shower used %i bottles of water!\n", x);       
    }
}
