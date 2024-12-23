#include<stdio.h>

int main(){
    int a, b, c; 
    printf("Cac so Armstrong co 3 chu so la:\n");
    
    for(int i = 100; i < 500; i++){
        int temp = i; 
        c = temp % 10;       
        temp = temp / 10;   
        b = temp % 10;       
        temp = temp / 10;    
        a = temp;            
        if ((a * a * a + b * b * b + c * c * c) == i){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
