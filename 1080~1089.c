//1083
#include<stdio.h>
int main() {
    char arr[100];
    gets(arr);
    int cnt = 0;
    for (int i = 0; i < 100; i++)if (arr[i] == '!')cnt++;
    printf("%d", cnt);
}

////////////////////////////////////////////////////

//1084
#include<stdio.h>
int main() {
    unsigned char arr[100];
    gets(arr);
    int len;
    for (int i = 0; i < 100; i++) {
        if (arr[i] == 0) {
            len = i;
            break;
        }
    }

    for (int i = 0; i < len / 2; i++) {
        unsigned char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z')arr[i] = arr[i] + 32;
        else if (arr[i] >= 'a' && arr[i] <= 'z')arr[i] = arr[i] - 32;
        else if (arr[i] == 0)break;
    }

    printf("%s", arr);
}

////////////////////////////////////////////////////

//1086
#include<stdio.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int alpha[26] = { 0, };
    for (int i = 0; i < 100; i++) {
        if (arr[i] != 0)alpha[arr[i] - 'a']++;
        else break;
    }
    for (int i = 0; i < 26; i++)printf("%d ", alpha[i]);
}
