/**
 * PAT TEST LEVEL B, 1003. http://www.patest.cn/contests/pat-b-practise/1003
 * */

#include <stdio.h>
#include <string.h>
#define MAX 100
int pass(char *);
int change_state(char,int *,int *,int *,int);
int main (void){
    int size;
    int arr_size;
  
    scanf("%d",&arr_size);
    char arr[arr_size][MAX];
    for (int i=0;i<arr_size;i++){
        scanf("%s",arr[i]);
    }
    for (int i=0;i<arr_size;i++){
        int flag = pass(arr[i]);
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }       
    }
    return 0; 
}

int pass(char *str){
    int state = 0;
    int mark1 = 0;
    int mark2 = 0;
    int length = strlen(str);
    for (int i=0;i<length;i++){
        change_state(str[i],&state,&mark1,&mark2,i);
    }
    int num1 = mark1;
    int num2 = mark2 - mark1 -1;
    int num3 = length - mark2 -1;

    if(state == 3 ||state == 4){
        if(num1 * num2 == num3){
            return 1;
        }else{
            return 0;
        }
    
    }else{
            return 0;
    }
    
}

int change_state(char ch,int *state,int *mark1,int *mark2,int i){
    switch (*state)
    {
        case 0:
            if (ch == ' '||ch=='A'){
                *state = 0;
            }else if(ch == 'P'){
                *state = 1;
                *mark1 = i;
            }else{
                *state = -1;
            }
            break;
        case 1:
            if(ch == 'A'){
                *state = 2; 
            }else{
                *state = -1;
            }
            break;
        case 2:
            if(ch == 'T'){
                *state = 3;
                *mark2 = i;
            }else if(ch == 'A')
            {
                *state = 2;
            }else
            {
                *state = -1;
            }
            break;
        case 3:
            if(ch == ' '||ch == 'A'){
                *state = 4;
            }else{
                *state = -1;
            }
            break;
    }
    return 0;
}
