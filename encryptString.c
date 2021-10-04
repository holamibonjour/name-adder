#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str;
    int n,a;
    printf("Enter length of code: ");
    scanf("%d", &n);

    str = (char*)malloc((n+1)*sizeof(char));

    printf("Enter the code: ");
    fflush(stdin);
    scanf("%[^\n]s", str);

    while(*str != '\0'){
        a = (int)(*str);
        ++a;
        printf("%c", a);
        str++;
    }
    free(str);

    return 0;
}
