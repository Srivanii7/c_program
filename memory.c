#include<stdio.h>
int main(){
    int a=5;
    // pointer *
    int *b=&a;
    printf("%d",a);
    // memory
    printf("\n%d",&a);
    printf("\n%d",b);
}