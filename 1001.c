#include <stdio.h>
int callatz(int *);
int main(void){
    int n = 0;
    int count = 0;
    scanf("%d",&n);
    while(n != 1){
        callatz(&n);
        count += 1;
    }
    printf("%d\n",count);
    return 0;
}

int callatz(int *num){
    if ((*num)%2 == 0){
        *num = (*num)/2;
    }else{
        *num = (3*(*num)+1)/2;
    }
    return 0;    
}
