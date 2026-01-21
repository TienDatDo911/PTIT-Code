#include <stdio.h>
int main(){
    long long n,i;
    scanf("%lld",&i);
    for(i;i>0;i--){
        scanf("%lld",&n);
        printf("%.15lf\n",1/(double)n);
    }
    return 0;
}
