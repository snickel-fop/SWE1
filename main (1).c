#include <stdio.h>

int sumdigits(int len, char str[len]) {
    int sum = 0;
    for(int i = 0; i < len; ++i) {
        if(str[i] >= 48 && str[i] <= 57) {
            sum = sum + (str[i] - 48);
        }
    }
    return sum;
}


int main(void)
{
    char str[] = "Ha4lo123";
    printf("%d\n", sumdigits(8, str));
    return 0;
}
