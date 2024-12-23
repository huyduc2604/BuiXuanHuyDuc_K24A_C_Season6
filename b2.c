#include<stdio.h>
int main(){
    int sum,sum1,arr[5];
    sum=0;
    sum1=0;
    printf("nhap mang");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if (arr[i] % 2 != 0){
            sum+=1;
        }else{
            sum1+=1;
        }
    }
     printf("tong so chan %d\n",sum1);
     printf("tong so le %d",sum);


    
    return 0;
}