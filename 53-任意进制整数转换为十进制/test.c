#include <stdio.h>
#include <ctype.h>

int main(void){
    int n;
    int i = 0;
    int result = 0;
    char ch[64];
    printf("Please enter your choices: 2->bin, 8->oct, 16->hex\n");
    scanf("%d", &n);
    printf("Please enter a number.\n");
    getchar();

    while((ch[i] = getchar()) != '\n'){
        if(ch[i] >= 'A'){
            tolower(ch[i]);
            result = result * n + (ch[i] - 'a' + 10);
        }else{
            result = result * n + ch[i] - '0';
        }
        i++;
    }

    printf("After convert: %d\n", result);
    return 0;
}