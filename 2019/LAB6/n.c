#include<stdio.h>
#include<stdlib.h>
void stcat(char *a1,char *b1)
{
    int count = 0;
    char *c1 = (char*)(malloc(sizeof(char)*512));
    
    while(*(a1+count) != '\0')
    {
        *(c1+count)=*(a1+count);
        count++;
    }
    count=count-1;
    int i = 0;
    while(*(b1+i) != '\0')
    {
        *(c1+count)=*(b1+i);
    }
    i=0;
    while(*(c1+i)!='\0')
    {
        printf("%c",*(c1+i));
    }
}
int main(void)
{
    char *str1 = (char*)(malloc(256*sizeof(char)));
    char *str2 = (char*)(malloc(256*sizeof(char)));
    scanf("%s %s",str1,str2);
    stcat(str1,str2);
    free(str1);
    free(str2);
    
}

