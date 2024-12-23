#include<stdio.h>
int main(){
    int sum,arr[5];
    sum=0;
    printf("nhap mang");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if (arr[i] % 2 != 0){
            sum+=arr[i];
        }
    }
     printf("%d",sum);
    
    return 0;
}