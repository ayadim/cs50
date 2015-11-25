#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>


int main (int argc,string argn[])
{
    string input ="";
    input = GetString();
    
    if(input != NULL )
    {
        printf("%c",toupper(input[0]));
        for(int i=0,n=strlen(input);i<n;i++)
        {
            if(input[i-1] == 32)
                printf("%c",toupper(input[i]));
        }    
        printf("\n");
    }
}

