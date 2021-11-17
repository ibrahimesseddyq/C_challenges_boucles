#include <stdio.h>

int main()
{
    int n;
    int a=0;
    int i=2;
    printf("Entrer un nombre");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0)
        {
            a=1;
            break;
        }
        i++;
    }
    if(a==0){
        printf("Ce nombre est Premier");
    }
    else{
        printf("Ce nombre N'est pas premier");
    }
        
}