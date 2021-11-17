#include <stdio.h>
void echange(int a,int b);
void echange(int a,int b )
{
    int c;
    printf("a(i)=%d b(i)= %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a(f)= %d b(f)= %d",a,b);
    
}
/*int main(){
    echange(1,5);
}*/