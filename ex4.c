#include <stdio.h>

int main()
{
    int n;
    int i;
    int res;
    int res1;
    printf("entrer un nombre n : ");
    scanf("%d",&n);
    while(res1!=0){
        res=n%10;
        res1=n/10;
        printf("%d",res);
        n=res1;
    }


    return 0;
}
