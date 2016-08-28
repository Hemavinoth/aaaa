#include <stdio.h>
void hanoi(int n,char from,char topeg,char aux){
    if(num==1){
        printf("\nMoving disc 1 from peg %c to peg %c",from,topeg);
        return;
    }
    hanoi(n-1,from,aux,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",n,from,top);
    hanoi(num-1,topeg,from,aux);
}

int main(){
    int num;
    scanf("%d",&num);
    hanoi(num,'A','C','B');
    return 0;
}
