//Program no 18 
//Ashutosh Anil Pawar
//Class : BCs-1
//Roll no.42

#include<stdio.h>
int main() {

    int n,arm =0,r,c,temp;
    printf("Enter any number : ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
       { 
           r=n%10;
           arm=(r*r*r)+arm;
            n=n/10;
       }

       if(temp == arm)
            printf("This is Armstrong Number ");
       else
            printf("This is not an  Armstrong  Number  ");

       return 0; 
}
