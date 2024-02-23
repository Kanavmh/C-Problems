/******************************************************************************
you are required to accept credentials for userid of LMN Ltd. It wants to accept input from user check
whether it is an Alphabet, Number or Special Character, 
if input is alphabet display 0, 
if input is number display 1
if input is Special character display 2. 
Write an code to find accepted input from user is Alphabet, Number or Special Character.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    
    printf("Enter any character: ");
    scanf("%c", &a);


    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("0");
    }
    else if(a >= '0' && a <= '9')
    {
        printf("1");
    }
    else 
    {
        printf("2");
    }

    return 0;
}
