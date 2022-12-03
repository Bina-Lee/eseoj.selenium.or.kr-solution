//1130
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddBlank(unsigned char input[100], unsigned char output[300]) {
    int len = 0;
    while (input[len] != 0)len++;
    int j = 0;
    for (int i = 0; i < len; i++) {
        output[j] = input[i];
        j++;
        if (i % 3 == 2) { output[j] = 32; j++; }
    }
    output[j] = 0;
}

int main() {

    unsigned char input[100], output[300];

    scanf("%s", input);

    AddBlank(input, output);

    printf("%s", output);

    return 0;
}

////////////////////////////////////////////////////
