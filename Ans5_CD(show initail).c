#include <stdio.h>
#include <string.h>
int main()
{int i,j=1,space=0;
char str[100],str2[100];
scanf("%[^\n]s",str);
printf("You have typed: %s\n",str);
str2[0] = str[0];
for(i=1;i<strlen(str);i++){
    if(str[i]==' '){
            str2[j++]=str[i+1];
        }
    }

printf("%s",str2);
    return 0;
}
