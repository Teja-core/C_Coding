#include<stdio.h>
#include<string.h>
#define MAX 100
unsigned int my_strlen(const char*);
void main(){
    char str[MAX];
    printf("enter the string...\n");
    scanf("%[^\n]",str);
    printf("the original string is :%s\n",str);
    printf("the string len is %ld\n",strlen(str));
    //my_strlen(str);
    printf("the string len is %d\n",my_strlen(str));
}
unsigned int my_strlen(const char*p)
{
    unsigned int len=0;
    while(*p)
    {
        
        len++;
        p++;
        //printf("done\n");

    }
    return len;
}