#include <stdio.h>
int main(){
int i=0;
char str[100];
scanf("%[^\n]s",str);
printf("You have typed: %s\n",str);
while(str[i] !='\0'){
    if(str[i]!=' '){
        printf("%c",str[i]);
    }
    else if(str[i]==' ' && str[i-1] != ' '){
        printf("\n");
    }
    i++;
}
 printf("\n");
return 0;
}
