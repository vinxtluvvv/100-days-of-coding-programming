#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int len, i, j, k;
    int first = 1;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    len = strlen(str);
    for (i=0; i < len; i++){
        for (j=i; j < len; j++){
           if (!first)
             printf(",");
           first = 0;
           for (k=i; k <= j; k++)
             printf("%c",str[k]);

          }
    }
    printf("\n");
    return 0;

}