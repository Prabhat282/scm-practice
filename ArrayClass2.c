#include<stdio.h>
int main()
{
    /* code */
    int a[5],b[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The first array is:\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    // printf("The Reverse order is:\n");
    // for(int i=4;i>=0;i--){
        // printf("%d ",a[i]);
    // }
    // for(int i=0;i<5;i++){
        // b[i]=a[i];
    // }
    // printf("The second array is:\n");
    // for(int i=0;i<5;i++){
        // printf("%d ",b[i]);
    // }
    int min=a[0];
    int max=0;
    for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Minimum is %d Maximum is %d",min,max);
    return 0;
}
