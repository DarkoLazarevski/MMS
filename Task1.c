#include <stdio.h>
#define MAX 100

int main(){

    int number;
    int arr[MAX];
    char symbols[501];
    int i=0;
    int j;
    int r;
    int position=0;

    printf("Enter any number = ");
    scanf("%s", symbols);
    
    /*while (number != \0) {
  
        r = arr % 10;
  
        arr[i] = r;
        i++;
  
        number = number / 10;
    }
    for (j=i-1;  j>-1; j--) {
        printf("%d \n", arr[j]);
    }
 */
 
 while(symbols[i]!='\0'){
    printf("%c,", symbols[i]);
    //i++;
    if(i=symbols[i+1]){
    printf("A\n");
    i++;
}
}
}

