#include <stdio.h>

int main() {
    int n,a,b,i,result;
    printf("enter first number of your custom fibonacci series=");
    scanf("%d",&a);
    printf("enter first number of your custom fibonacci series=");
    scanf("%d",&b);
    printf("enter the number of terms of fibonacci series=");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------\n");
    printf("\nThe fibonacci series is\n");
    for(i=1;i<=n;i++){
        printf("%d,",a);
        result=a+b;
        a=b;
        b=result;
    }



  return 0;
}