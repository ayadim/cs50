/**
   greedy
   ayadi mohammed
   ayadi.mohamed@outlook.com   
**/
#include <stdio.h>
#include <cs50.h>
#include <math.h>


#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

//prototypes 
float getUserAmount(void);

int main(void) 
{
    float amount = getUserAmount();   
    int cents = round(amount * 100),count_Nbr = 0;
    
    //printf("first cent : %i \n",cents);
    
    while(cents>0)
    {   
        if(cents >= QUARTER) {
            count_Nbr += cents / QUARTER;
            cents -= QUARTER *(cents / QUARTER);
        }
        else if(cents >= DIME) {
            count_Nbr += cents / DIME ;
            cents -= DIME * (cents / DIME);
        }
        else if(cents >= NICKEL) {
            count_Nbr += cents / NICKEL ;
            cents -= NICKEL * (cents / NICKEL);
        }
        else if(cents >= PENNY) {
            count_Nbr += cents / PENNY ;
            cents -= PENNY * (cents / PENNY);
        }
    }
    
    printf("%d\n",count_Nbr);
    return 0;
}


float getUserAmount(){
    float amount = 0;
    do{
        //prompt user for amount of change 
        printf("hai! How much change is owed ? : ");
        amount = GetFloat();
        
    }while(amount<0.0);
    return amount;
}



