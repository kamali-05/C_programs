
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char *ptr1 = str;
    char *ptr2 = str + len - 1;

    while (ptr1 < ptr2) {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }

    printf("%s", str);
    return 0;
}
