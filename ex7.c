#include <stdio.h>
#include <stdbool.h>
bool isPremier(int n){
    int a=0;
    int i=2;
    while(i<n){
        if(n%i==0)
        {
            a=1;
            break;
        }
        i++;
    }
    if(a==0){
        return true;
    }
    else{
        return false;
    }
}
/*int main()
{
printf("%d",isPremier(6));
        
}*/
