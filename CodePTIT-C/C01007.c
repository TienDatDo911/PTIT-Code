#include <stdio.h>
int main(){
    int a,b,tong,hieu,tich,du,nguyen;
    float thuc;
    scanf("%d %d",&a,&b);
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    nguyen=a/b;
    thuc=(float)a/b;
    du=a%b;
    printf("%d\n%d\n%d\n%d\n%d\n%.2f",tong,hieu,tich,nguyen,du,thuc);
    return 0;
}
