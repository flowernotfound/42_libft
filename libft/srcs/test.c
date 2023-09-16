#include <string.h>

int main() {
    char str[] = "abcdef";
    memmove(str + 2, str, 4);  // "ababef"
    return 0;
}

