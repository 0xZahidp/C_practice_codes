#include <stdio.h>
#include <string.h>>
int main()
{int i=0,j;
char str[100];
scanf("%[^\n]s",str);
printf("You have typed: %s\n",str);
 for (i = 0; str[i] != '\0'; ++i) {
     while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' &&  str[i] <= '9') && !(str[i] == '\0')) {
         for (j = i; str[j] != '\0'; ++j) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
printf("Without special character: %s",str);
    return 0;
}
