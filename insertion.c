#include <stdio.h>
void main(){
int i;
    int a[7]={1,2,3,45,4,5};
    // int j = a[i];
    int k=3; 
    int item = 10;
    for(i=0; i<6; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%d\n", a[5]);
    
    // for(i =k; i<6; i++){
    //         a[i] = a[i+1];
    // }
    for(i =6; i>k; i--){
            a[i] = a[i-1];
    }
    a[k] = item;

    
    for(i=0; i<7; i++){
    // for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}