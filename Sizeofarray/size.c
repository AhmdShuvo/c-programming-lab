#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[]={1,2,5,3,4,5};
    int arr2[]={2,3,1,9,5,10};
    int size1=sizeof(arr1)/sizeof(arr1);  //values in bytes, total size devided by single index size
    int size2= sizeof(arr1)/sizeof(arr2); //values in bytes, total size devided by single index size
    if(size1 == size2){
        printf("size of both arrays are equal");
    }else{
        printf("size of arrays are not equal");
    }
    getch();    
} 