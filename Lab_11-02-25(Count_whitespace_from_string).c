#include <stdio.h>
#include <string.h>
int main()
{int i=0,space=0;
char str[100];
scanf("%[^\n]s",str);
printf("You have typed: %s\n",str);
for(i;i<strlen(str);i++){
    if(str[i]==' '){
        space++;
    }
}
printf("Total white space: %d",space);
    return 0;
}
