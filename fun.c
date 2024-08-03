#include<stdio.h>

void func(){
    printf("\nhi");
}
// function parameters

void sum(int a,int b){
int c=a+b;
printf("\n%d",c);
}

// declare 

void fun();





int main(){
    printf("hey");
    func();
    sum(5,6);

//    call // 
    fun();
}

// function define
void fun(){
    printf("good morning");
}