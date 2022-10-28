//1080
#include<stdio.h>
int main() {
    double arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0)printf("%.4lf ", arr[i] * 0.01);
        else printf("%.4lf ", arr[i]);
    }
}

////////////////////////////////////////////////////

//1082
#include<stdio.h>
int main() {
    unsigned int data;
    scanf("%x", &data);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int ind;
        scanf("%d", &ind);
        ind--;
        if ((data >> ind) & 0x01)data = data - (0x01 << ind);
    }
    printf("%X", data);
}

////////////////////////////////////////////////////

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

//1085
#include<stdio.h>
int main() {
    int pand;
    scanf("%d", &pand);
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[100][100] = { 0, };
    for (int i = pand; i < pand + x; i++) {
        for (int j = pand; j < pand + y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < pand * 2 + x; i++) {
        for (int j = 0; j < pand * 2 + y; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
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

////////////////////////////////////////////////////

//1087
#include<stdio.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int cnt[26] = { 0, };
    for (int i = 0; i < 100; i++) {
        if (arr[i] == 0)break;
        else if (arr[i] >= 'A' && arr[i] <= 'Z')arr[i] = arr[i] + 32;
        cnt[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", cnt[i]);
    }
}

////////////////////////////////////////////////////

//1088
#include <stdio.h>

unsigned int MIDTERM(unsigned int _data) {
    unsigned char* _check = (unsigned char*)&_data;
    for (int i = 0; i < 4; i++) {
        int cnt = 0;
        for (int j = 6; j >= 0; j--) {
            if (*(_check + i) >> j & 0x01)cnt++;
        }
        if ((*(_check + i) >> 7 & 0x01) && cnt % 2 == 0) *(_check + i) = *(_check + i) - (0x01 << 7);
        else if (!(*(_check + i) >> 7 & 0x01) && cnt % 2 == 1) *(_check + i) = *(_check + i) + (0x01 << 7);
    }
    return _data;
}

int main() {

    unsigned int data;

    scanf("%X", &data);

    printf("%X", MIDTERM(data));

    return 0;
}
