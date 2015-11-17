#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50
typedef struct{
    char *name;
    char *id;
    int grade;
}stu;

int main(void){
    stu max,min;
    min.grade = 101;
    max.grade = -1;

    int length = 0;
    
    scanf("%d",&length);
    for(int i=0;i<length;i++){
        stu temp;
        temp.name = (char *)malloc(MAX * sizeof(char));
        temp.id = (char *)malloc(MAX * sizeof(char));
        //temp.grade = 0;
        scanf("%s",temp.name);
        scanf("%s",temp.id);
        scanf("%d",&temp.grade);
    
        if(temp.grade > max.grade){
            max.grade = temp.grade;
            max.name = temp.name;
            max.id = temp.id;

        }
        if(temp.grade < min.grade){
            min.grade = temp.grade;
            min.name = temp.name;
            min.id = temp.id;
        }
    }
    
    printf("%s",max.name);
    printf(" ");
    printf("%s\n",max.id);
    printf("%s",min.name);
    printf(" ");
    printf("%s\n",min.id);
 
    return 0;
}
