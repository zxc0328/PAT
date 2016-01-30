#include <stdio.h>
#include <string.h>
#define MAX 300
int main(void){
    char str[MAX];
    char str_p[MAX];
    char *num_arr[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum = 0; 
    scanf("%s",str);
    int length = strlen(str);
    for (int i=0;i<length;i++){
        sum = sum + (str[i]-'0');
    }
    sprintf(str_p,"%d",sum);
    length = strlen(str_p);
    for (int i=0;i<length;i++){
        int num = str_p[i] -'0';
        if (i) putchar(' ');
        printf("%s",num_arr[num]);
    }
    printf("\n");
    return 0;
}

