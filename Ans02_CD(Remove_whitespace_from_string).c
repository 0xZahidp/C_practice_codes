#include <stdio.h>
#include <string.h>>
int main()
{int i=0,j;
char str[100];
scanf("%[^\n]s",str);
printf("You have typed: %s\n",str);
for(i;i<strlen(str);i++){
    if(str[i] == ' '){
            for(j=i;j<strlen(str);j++)
        {
            str[j]=str[j+1];
        }
}}
printf("Without white space: %s",str);
    return 0;
}
