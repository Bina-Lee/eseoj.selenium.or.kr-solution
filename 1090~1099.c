//1090
#include<stdio.h>
int main() {
    char text[50];
    scanf("%s", text);
    for (int i = 0; i < 50; i++) {
        if (text[i] == 'a')if (text[i + 1] == 'n')if (text[i + 2] == 'd') {
            text[i] = '&';
            for (int j = i + 1; j < 50; j++)text[j] = text[j + 2];
        }
        else if (text[i] == 0)break;
    }
    printf("%s", text);
}
