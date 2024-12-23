#include<stdio.h>
#include<math.h>
int main(){
    int n,s,c;
    printf("nhap n");
    scanf("%d",&n);
    s=2;
    while(n>0){
      c=1;
     for(int i=2;i<=sqrt(s);i++){
        if(s % i ==0){
         c=0;
         break;
        }
       }
      if(c){
       printf("%d ",s);
       n--;
      }
      s++;
 }  
   return 0;
}