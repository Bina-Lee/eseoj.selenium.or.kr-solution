//1110
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getInputValue(char arr[][100]){
    for(int i=0;i<6;i++){
        scanf("%s",arr[i]);
    }
}

void printValue(char arr[][100]){
    for(int i=0;i<6;i++)printf("%s\n",arr[i]);
}

int main() {

    char str[6][100];

    getInputValue(str);

    printValue(str);

    return 0;
}

////////////////////////////////////////////////////

//1111
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isKeyIncluded(char str[100], char key[10]) {
    for (int i = 0; i < 100; i++)if (str[i] >= 'A' && str[i] <= 'Z')str[i] = str[i] + 32;
    for (int i = 0; i < 10; i++)if (key[i] >= 'A' && key[i] <= 'Z')key[i] = key[i] + 32;
    int len;
    for (int i = 0; i < 10; i++)if (key[i] == 0) { len = i; break; }
    for (int i = 0; i < 100; i++) {
        if (str[i] == key[0]) {
            int check = 1;
            for (int j = 1; j < len; j++)if (str[i + j] != key[j]) { check = 0; break; }
            if (check)return 1;
        }
    }
    return 0;
}

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));
    return 0;

}

////////////////////////////////////////////////////

//1112
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct student {
    char name[10];
    int age;
    int height;
};

int main() {
    struct student s[2];
    for (int i = 0; i < 2; i++)scanf("%s %d %d", s[i].name, &s[i].age, &s[i].height);
    if (s[0].age > s[1].age)strcpy(s[1].name, s[0].name);
    else if (s[0].age < s[1].age)strcpy(s[0].name, s[1].name);
    else { strcpy(s[0].name, "SAME"); strcpy(s[1].name, "SAME"); }
    for (int i = 0; i < 2; i++)printf("%s %d %d\n", s[i].name, s[i].age, s[i].height);
}

////////////////////////////////////////////////////

//1113
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esestrcpy(char result[100], char arr[100]) {
    int j = 0;
    for (int i = 0; i < 100; i++) {
        if (arr[i] == 0)break;
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            result[j] = arr[i];
            j++;
        }
    }
    result[j] = 0;
}

int main(void)
{
    char arr[100];
    char result[100];

    scanf("%s", arr);

    esestrcpy(result, arr);

    printf("%s", result);
    return 0;
}

////////////////////////////////////////////////////

//1114
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esefix(char data[100], char result[200]) {
    char checkalpha = data[0];
    int count = 1;
    int j = 0;
    for (int i = 1; i < 100; i++) {
        //
        if (checkalpha == data[i])count++;
        else {
            result[j] = count + '0';
            j++;
            result[j] = checkalpha;
            j++;
            count = 1;
            checkalpha = data[i];
        }
        if (data[i] == 0)break;
    }
    result[j] = 0;
}


int main() {

    char data[100]; // 입력 받은 값 저장하는 배열
    char result[200]; // 변형된 결과 저장하는 배열

    scanf("%s", data);

    esefix(data, result);

    printf("%s", result); // 변형된 결과 배열 출력

    return 0;
}

////////////////////////////////////////////////////

//1118
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i])max = arr[i];
        if (min > arr[i])min = arr[i];
    }
    printf("%d %d", max, min);
}

////////////////////////////////////////////////////

//1119
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct st {
    char name[10];
    int d;
};

int main() {
    int n;
    scanf("%d", &n);
    struct st a[10];
    for (int i = 0; i < n; i++)scanf("%s %d", a[i].name, &a[i].d);
    struct st temp = a[0];
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j - 1].d < a[j].d) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)printf("%s %d\n", a[i].name, a[i].d);
}
