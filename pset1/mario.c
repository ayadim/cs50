/**
   mario
   ayadi mohammed
   ayadi.mohamed@outlook.com   
**/
#include <stdio.h>
#include <cs50.h>

//prototype
int getHeight(void);
void print_Half_Of_Pyramid(int nbrOfRows);

int main(void){
    int height = getHeight();
    print_Half_Of_Pyramid(height);
}

//get the height from users 
int getHeight(void){
    int nbr = 0;
    do {
        // ask user to input the pyramid number
        printf("Height:");
        nbr = GetInt();                                
        //analyse
        if(nbr==0)
            return 0;
    }while(nbr<1 || nbr>23);
    return nbr;
}

// print the half of pyramid 
void print_Half_Of_Pyramid(int nbrOfRows){     
    for(int i=1,rows=nbrOfRows,hashes=2,space=nbrOfRows-1;i<=rows;i++,hashes++,space--){
        //print spaces
        for(int print_space=0;print_space<space;print_space++)
            printf(" ");
        //print hashes
        for(int print_hash = 0;print_hash<hashes;print_hash++)
            printf("#");        
        printf("\n");
    }
}
