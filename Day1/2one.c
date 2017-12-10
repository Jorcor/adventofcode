#include <stdio.h>
#include <string.h>

int main() {
    char captcha[2500];
    int sum = 0, i;

    fgets(captcha, 2500, stdin);
    int len = strlen(captcha);

    for(i = 0; i < strlen(captcha); i++) {
        if(captcha[i] == captcha[(i+len/2)%len]) {
            sum += (captcha[i] - '0');
            printf("sum: %d\n", sum);
        }
    }

    // if(captcha[i-1] == captcha[0]) {
    //     sum += (captcha[0] - '0');
    // }

    printf("final: %d\n", sum);
    
    return 0;
}