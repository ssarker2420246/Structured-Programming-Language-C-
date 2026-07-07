#include <stdio.h>

int main() {
    char str1[100], str2[50];

    // Read two strings
    scanf("%s %s", str1, str2);

    char *p1 = str1;
    char *p2 = str2;

    // Move p1 to the end of str1 (the null terminator)
    while (*p1 != '\0') {
        p1++;
    }

    // Copy characters of str2 to the end of str1 using pointers
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0'; // Null-terminate the concatenated string

    printf("'%s'\n", str1);

    return 0;
}
