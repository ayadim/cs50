/**
   vigenere
   ayadi mohammed
   ayadi.mohamed@outlook.com   
**/
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char caesar(char myChar, char key);

int main(int argc, string argv[])
{    
    // handles errors when user try to execute program
    if (argc != 2 || strcmp(argv[1], "Hax0r2") == 0)
	{
        printf("You didn't enter a valid input . \n");          
        return 1;
    }
    string plainText = "", keyword="";
    int keyword_position =0, keyword_max=0;
    keyword = argv[1];
    keyword_position = strlen(keyword);
    keyword_max = strlen(keyword);
    plainText = GetString();
    
    for(int i=0, plain_length=strlen(plainText); i < plain_length;i++)
	{        
        printf("%c",caesar(plainText[i],keyword[keyword_position%keyword_max]));    
        if(isalpha(plainText[i]))
            keyword_position++;
    }
    printf("\n");
    return 0;
}

char caesar(char myChar, char key)
{
    // test if it's an alphabtique    
    if (isalpha(myChar))
    {
        if (isupper(myChar))
		{
            key = toupper(key);
            return ((((myChar - 65) + (((int)key) - 65)) % 26) + 65);           
        }
        else
		{
            key = tolower(key);
            return ((((myChar - 97) + (((int)key) - 97)) % 26) + 97);                   
        }
    }
    else
        return myChar;
}
