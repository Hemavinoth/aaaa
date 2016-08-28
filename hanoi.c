#include <stdio.h>
void hanoi(int n,char from,char topeg,char aux){
    if(n==1){
        printf("\n",from,topeg);
        return;
    }
    hanoi(n-1,from,aux,topeg);
    printf("\n",n,from,top);
    hanoi(n-1,topeg,from,aux);
}

int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,'A','C','B');
    return 0;
}
