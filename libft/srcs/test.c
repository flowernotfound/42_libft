#include <stdio.h>
#include <string.h>

void test_memmove() {
    char test1[] = "12345";
    memmove(&test1[2], &test1[0], 2);
    printf("Test1 result: %s (Expected: 12145)\n", test1);

    char test2[] = "abcde";
    memmove(&test2[0], &test2[2], 3);
    printf("Test2 result: %s (Expected: cdee)\n", test2);
    
    char test3[] = "111111";
    memmove(&test3[3], &test3[3], 3);
    printf("Test3 result: %s (Expected: 111111)\n", test3);
}

int main() {
    test_memmove();
    return 0;
}

