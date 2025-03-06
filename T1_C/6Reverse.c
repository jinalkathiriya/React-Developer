#include <stdio.h>

void reverse(char *str) {
    char *end = str;
    char temp;
    
    while (*end) 
        end++;
    end--; 

    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverse(str);
    
    printf("Reversed string: %s\n", str);
    return 0;
}
