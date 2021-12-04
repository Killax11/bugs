#include<stdio.h>
int main(){
    int a, a1, p;
    float l, b , pi, r1;
    l= 10;
    b= 10;
    a= l*b;
    p= l+b+l+b;
    pi= 3;
    r1= 3;
    a1= pi*r1*r1;
    printf("%d %d %d" &a,&a1,&p);
    return 0;
    }