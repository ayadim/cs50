/**
   caeser
   ayadi mohammed
   ayadi.mohamed@outlook.com   
**/
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc,string argv[])
{
    int key=0;
    string text ="";
    
    if(argc != 2)
    {
        printf("You didn't enter a valid encription key ! \n");
        printf("You didn't submited a valid input ! \n");
        return 1;
    }
    else
    {
        // convert from string to int
        key = atoi(argv[1]);
        if(key<0) {
            printf("the programm accept a non-negative value of key . \n");
			return 1;
        }
    }
    
    text = GetString();
    key = atoi(argv[1]);
    
    for(int i=0,plain_length=strlen(text);i<plain_length;i++) {
        
        if(isalpha(text[i]))
        {
            if(isupper(text[i]))
                printf("%c",((((text[i]-65)+key)%26)+65));//printf("%c",text[i]+key);
            else
                printf("%c",((((text[i]-97)+key)%26)+97));        
        }
        else
        {
            printf("%c",text[i]);
        }
        
    }
    printf("\n");
    return 0;
    
}
