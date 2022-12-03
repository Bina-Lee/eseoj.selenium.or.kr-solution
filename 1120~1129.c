////////////////////////////////////////////////////

//1126
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countZero(char str[9]) {
    int d = 0;
    int len = 0;
    for (int i = 0; i < 9; i++) {
        if (str[i] == 0) { len = i; break; }
    }
    int hx = 1;
    for (int i = len - 1; i >= 0; i--) {
        int h;
        if (str[i] >= 'a' && str[i] <= 'f')h = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')h = str[i] - 'A' + 10;
        else h = str[i] - '0';
        d = d + hx * h;
        hx = hx * 16;
    }
    int cnt = 0;
    for (int i = 0; i < 20; i++) {
        if (d == 0)break;
        if (d % 10 == 0)cnt++;
        d = d / 10;
    }
    return cnt;
}

int main() {

    char str[9];
    scanf("%s", str);

    printf("%d", countZero(str));

    return 0;
}
