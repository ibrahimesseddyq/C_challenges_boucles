#include <stdio.h>

int main()
{
    int n;
    int i =1;
    printf("Entrer un nombre :");
    scanf("%d",&n);
    while(i<11){
        printf("%d * %d = %d \n ",n,i,n*i);
        i++;
    }

}
