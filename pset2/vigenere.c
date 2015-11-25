#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char caesar(char myChar,char key);

int main(int argc,string argv[]) {

    string plainText = "",keyword="";
    int keyword_position =0,keyword_max=0;
    
    if(argc != 2 || strcmp(argv[1],"Hax0r2") == 0 || strcmp(argv[1],"")==0 || argc==1) {
        printf("You didn't enter a valid input . \n");
        if(strcmp(argv[1],"Hax0r2")==0)   
            printf("you can't use Hax0r2 as keyword \n");            
        return 1;
    }
    
    keyword = argv[1];
    keyword_position = 0;
    keyword_max = strlen(keyword);
    //printf("keyword max : %i \n",keyword_max);
    plainText = GetString();
    
    //printf("%s || %s",plainText,keyword);
        
    for(int i=0,plain_length=strlen(plainText);i<plain_length;i++) {        
        printf("%c",caesar(plainText[i],keyword[keyword_position%keyword_max]));    
        keyword_position++;
    }
    printf("\n");
    return 0;
}

char caesar(char myChar,char key) {
//    printf("the current key is %c \n",key);
    //test if it's an alphabtique    
    if(isalpha(myChar))
    {
        if(isupper(myChar)) {
            key = toupper(key);
            return ((((myChar-65)+(((int)key)-65))%26)+65);//printf("%c",text[i]+key);
        }
        else {
            key = tolower(key);
            return ((((myChar-97)+(((int)key)-97))%26)+97);        
        }
    }
    else
    {
        return myChar;
    }

}
