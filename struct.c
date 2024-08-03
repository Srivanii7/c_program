#include<stdio.h>

struct hello{
    int a;
    float b;
    char cc;
};
int main(){
    
struct hello s1;
s1.a=5;
s1.b=2.5;
s1.cc='s';
printf("%d",s1.a);
printf("\n%f",s1.b);
printf("\n%c",s1.cc);
}