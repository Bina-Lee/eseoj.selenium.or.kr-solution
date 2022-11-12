//1100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  isKeyIncluded(char* key, char* str){
    int len = 0;
    for (int i = 0; i < 10; i++)if (*(key + i) == 0) { len = i; break; }
    for (int i = 0; i < 101 - len; i++) {
        if (*(str + i) == 0)break;
        else if (*(str + i) == *key) {
            int check = 1;
            for (int j = 1; j < len; j++) {
                if (*(str + i + j) != *(key + j)) { check = 0; break; }
            }
            if (check == 1)return 1;
        }
    }
    return 0;
}

int main(void)
{
    char key[10];
    char str[100];

    scanf("%s", key);
    scanf("%s", str);

    printf("%d", isKeyIncluded(key, str));

}

////////////////////////////////////////////////////
