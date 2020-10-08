#include <stdio.h>

int main() {
    int num;
    printf("Decimal Number (0 and 32767): ");
    scanf("%d", &num);	

    printf("%d in Octal is ~%o~", num, num);
}
