//1090
#include <stdio.h> 


void SWAP(char* p){
    char* pnt=p;
    int cnt1=0;
    while(*(pnt+cnt1)!=0){
        if(*(pnt+cnt1)=='a')if(*(pnt+cnt1+1)=='n')if(*(pnt+cnt1+2)=='d'){
            *(pnt+cnt1)='&';
            int cnt2=1;
            while(1){
                *(pnt+cnt1+cnt2)=*(pnt+cnt1+cnt2+2);
                if(*(pnt+cnt1+cnt2+2)==0)break;
                cnt2++;
            }
        }
        cnt1++;
    }
} 


int main() { 
     char text[50]; 
     scanf("%s", text);
     SWAP(text); 
     printf("%s", text); 
     return 0;
}

////////////////////////////////////////////////////

//1091
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp(char src[][100]) {
    int check = 1;
    for (int i = 0; i < 100; i++) {
        if (src[0][i] == 0 && src[1][i] == 0)break;
        else if (src[0][i] == 0 || src[1][i] == 0) { check = -1; break; }
        else if (src[0][i] >= 'a' && src[0][i] <= 'z') {
            src[0][i] = src[0][i] - 32;
            if (src[0][i] != src[1][i]) { check = -1; break; }
        }
        else if (src[0][i] >= 'A' && src[0][i] <= 'Z') {
            src[0][i] = src[0][i] + 32;
            if (src[0][i] != src[1][i]) { check = -1; break; }
        }
        else if (src[0][i] != src[1][i]) { check = -1; break; }
    }
    return check;
}

int main(void)
{
    char arr[2][100];

    scanf("%s", arr[0]);
    scanf("%s", arr[1]);

    printf("%d", cmp(arr)); // 1 또는 -1이 리턴되어 출력 되는 형태

    return 0;
}

////////////////////////////////////////////////////

//1092
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp(char src[][100]){
    int check=1;
    for(int i=0;i<100;i++){
        if(src[0][i]==0&&src[1][i]==0)break;
        else if(src[0][i]==0||src[1][i]==0){check=-1;break;}
        else if(src[0][i]>='a'&&src[0][i]<='z'){
            if(src[1][i]>='A'&&src[1][i]<='Z')src[1][i]=src[1][i]+32;
            if(src[0][i]!=src[1][i]){check=-1;break;}
        }
        else if(src[0][i]>='A'&&src[0][i]<='Z'){
            if(src[1][i]>='a'&&src[1][i]<='z')src[1][i]=src[1][i]-32;
            if(src[0][i]!=src[1][i]){check=-1;break;}
        }
        else if(src[0][i]!=src[1][i]){check=-1;break;}
    }
    return check;
}

int main(void)
{
    char arr[2][100];

    scanf("%s", arr[0]);
    scanf("%s", arr[1]);


    printf("%d", cmp(arr));

    return 0;
}

////////////////////////////////////////////////////

//1093
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char** ese(char** _p) {
    _p = (char**)malloc(sizeof(char*) * 3);
    for (int i = 0; i < 3; i++)_p[i] = (char*)malloc(sizeof(char) * 30);
    for (int i = 0; i < 3; i++)scanf("%s", _p[i]);
    return _p;
}

int main(void)
{
    char** p = NULL;

    p = ese(p);

    printf("%s\n%s\n%s", *p, *(p + 1), *(p + 2));

    for (int i = 0; i < 3; i++) free(p[i]);
    free(p);

    return 0;
}

////////////////////////////////////////////////////

//1094
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char** ese(char** _p) {
    _p = (char**)malloc(sizeof(char*) * 3);
    for (int i = 0; i < 3; i++)_p[i] = (char*)malloc(sizeof(char) * 50);
    for (int i = 0; i < 3; i++)scanf("%s", _p[i]);
    return _p;
}

int main(void)
{
    char** p = NULL;

    p = ese(p);

    printf("%s\n%s\n%s", *p, *(p + 1), *(p + 2));

    for (int i = 0; i < 3; i++) free(p[i]);
    free(p);

    return 0;
}

////////////////////////////////////////////////////

//1095
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  countKey(char* str, char key) {
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        if (*(str + i) == 0)return cnt;
        else if (*(str + i) == key)cnt++;
    }
}

int main(void)
{
    char str[100];
    char key;

    scanf("%c", &key);
    scanf("%s", str);

    printf("%d", countKey(str, key));

}

////////////////////////////////////////////////////

//1096
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  isKeyIncluded(char* str, char* key) {
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
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));

}

////////////////////////////////////////////////////

//1097
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void makeDot(unsigned int data, char* _binary) {
    for (int i = 31; i >= 0; i--) {
        if (data >> i & 0x01)*(_binary + 31 - i) = '*';
        else *(_binary + 31 - i) = '-';
    }
}

int main(void)
{
    unsigned int data;
    char binary[33];
    scanf("%u", &data);

    makeDot(data, binary);
    binary[32] = NULL;

    printf("%s", binary);
    return 0;
}

////////////////////////////////////////////////////

//1098
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  isCharIncluded(char* str, char key){
    for(int i=0;i<100;i++){
        if(*(str+i)==0)return 0;
        else if(*(str+i)==key)return 1;
    }
    return 0;
}

int main(void)
{
    char str[100];
    char key;

    scanf("%c", &key);
    scanf("%s", str);

    printf("%d", isCharIncluded(str, key));

}

////////////////////////////////////////////////////

//1099
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void makeDot(unsigned int data, char* _binary) {
    int cnt=0;
    for (int i = 31; i >= 0; i--) {
        if (data >> i & 0x01){
            *(_binary + 31 - i) = '@';
            cnt++;
        }
        else *(_binary + 31 - i) = '!';
    }
    printf("%d\n",cnt);
}

int main(void)
{
    unsigned int data;
    char binary[33];
    scanf("%u", &data);

    makeDot(data, binary);
    binary[32] = NULL;

    printf("%s", binary);
    return 0;
}
