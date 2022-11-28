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

//1101
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** makeArrayDynamic(int** _p, int _size) {
    _p = (int**)malloc(sizeof(int*) * _size);
    for (int i = 0; i < _size; i++)_p[i] = (int*)malloc(sizeof(int) * _size);
    return _p;
}
int sumofArray(int** _p, int _size) {
    int sum = 0;
    for (int i = 0; i < _size; i++)for (int j = 0; j < _size; j++)sum = sum + _p[i][j];
    return sum;
}

int main() {

    int** p = NULL;
    int size, sum = 0;

    scanf("%d", &size); // 정사각 배열 사이즈를 입력받음.

    // [size x size] 크기의 배열 동적할당
    p = makeArrayDynamic(p, size);  // <- 1. 이 함수 구현


    // 배열에 원소 값을 순차적으로 입력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    // 배열 내에 있는 모든 원소의 합
    sum = sumofArray(p, size);   // <- 2. 이 함수 구현

    printf("%d", sum); // 합 출력

    // 동적할당 free
    for (int i = 0; i < size; i++) free(p[i]);
    free(p);

    return 0;
}

////////////////////////////////////////////////////

//1102
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** makeArrayDynamic(int** _p, int _size){
    _p=(int**)malloc(sizeof(int*)*_size);
    for(int i=0;i<_size;i++)_p[i]=(int*)malloc(sizeof(int)*_size);
    return _p;
}
int countEven(int** _p, int _size){
    int cnt=0;
    for(int i=0;i<_size;i++)for(int j=0;j<_size;j++)if(_p[i][j]%2==0)cnt++;
    return cnt;
}

int main() {

    int** p = NULL;
    int size, cnt = 0;

    scanf("%d", &size); // 정사각 배열 사이즈를 입력받음.

    // [size x size] 크기의 배열 동적할당
    p = makeArrayDynamic(p, size); // <- 1. 이 함수 구현


    // 배열에 원소 값을 순차적으로 입력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    // 배열 내에 있는 짝수인 원소의 개수
    cnt = countEven(p, size); // <- 2. 이 함수 구현

    printf("%d", cnt); // 합 출력

    // 동적할당 free
    for (int i = 0; i < size; i++) free(p[i]);
    free(p);

    return 0;
}

////////////////////////////////////////////////////

//1103
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 // scalarMultiple 함수 구현 ====================
void scalarMultiple(int* _arr, int _n) {
    for (int i = 0; i < 12; i++)*(_arr + i) = *(_arr + i) * _n;
}
// ===================================


int main() {

    int arr[3][4];
    int n = 0;
    scanf("%d", &n);

    // 입력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // scalarMultiple 함수 호출 부분 (여기에 작성)==========
    scalarMultiple(arr, n);
    // =====================================

    // 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

////////////////////////////////////////////////////

//1104
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// makePow 함수 구현 ====================

void makePow(int arr[3][4],int n){
    for(int i=0;i<3;i++)for(int j=0;j<4;j++){
        int val=arr[i][j];
        arr[i][j]=1;
        for(int k=1;k<=n;k++){
            arr[i][j]=arr[i][j]*val;
        }
    }
}

// ===================================

int main() {

    int arr[3][4];
    int n = 0;
    scanf("%d", &n);

    // 입력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // makePow 함수 호출 부분 (여기에 작성)==========
    makePow(arr,n);
    // ==================================

    // 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }

    return 0;
}

////////////////////////////////////////////////////

//1105
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int cmp(char _str[][100]) {
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        if (_str[0][i] == 0 || _str[1][i] == 0)break;
        else if (_str[0][i] == _str[1][i])cnt++;
    }
    return cnt;
}


int main() {

    char str[2][100];
    int cnt = 0; // 같은자리 같은문자 개수

    // 입력
    scanf("%s", str[0]);
    scanf("%s", str[1]);

    // cmp 함수 호출 ====================
    cnt = cmp(str);
    // =============================

    //출력
    printf("%d", cnt);

    return 0;
}

////////////////////////////////////////////////////

//1106
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(char str[2][100]){
    for(int i=0;i<100;i++){
        char temp=str[0][i];
        str[0][i]=str[1][i];
        str[1][i]=temp;
    }
}

int main() {

    char str[2][100];

    // 입력
    scanf("%s", str[0]);
    scanf("%s", str[1]);

    // swap 함수 호출 ====================
    swap(str);
    // =============================

    //출력
    printf("%s\n%s", str[0], str[1]);

    return 0;
}

////////////////////////////////////////////////////

//1107
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int** p = NULL;
    int** q = NULL;

    int a, b; // 순서대로 행, 열
    scanf("%d %d", &a, &b);

    // 코드 작성 ==============================
    p = (int**)malloc(sizeof(int*) * a);
    for (int i = 0; i < a; i++)p[i] = (int*)malloc(sizeof(int) * b);
    for (int i = 0; i < a; i++)for (int j = 0; j < b; j++)scanf("%d", &p[i][j]);

    q = (int**)malloc(sizeof(int*) * b);
    for (int i = 0; i < b; i++)q[i] = (int*)malloc(sizeof(int) * a);
    for (int i = 0; i < b; i++)for (int j = 0; j < a; j++)q[i][j] = p[j][i];
    // ====================================

    // 출력
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    // 동적할당 free
    for (int i = 0; i < a; i++) free(p[i]);
    free(p);
    for (int i = 0; i < b; i++) free(q[i]);
    free(q);

    return 0;
}

////////////////////////////////////////////////////

//1108
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int p[100];
    int** q = NULL;

    int size; // 배열 p의 사이즈
    int n; // 몇 행으로 만들 것인가

    scanf("%d %d", &size, &n);

    // 여기에 코드 작성 =======================================

    if(size%n!=0){printf("ERROR");return 0;}
    
    for(int i=0;i<size;i++)scanf("%d",&p[i]);
    
    q=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)q[i]=(int*)malloc(sizeof(int)*size/n);
    for(int i=0;i<n;i++)for(int j=0;j<size/n;j++){
        q[i][j]=p[i*size/n+j];
    }


    // ==================================================

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size / n; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    // 동적할당 free
    for (int i = 0; i < n; i++) free(q[i]);
    free(q);

    return 0;
}

////////////////////////////////////////////////////

//1109
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void makeArrayandInput(char** str) {
    //str=(char**)malloc(sizeof(char*)*6);
    for (int i = 0; i < 6; i++)str[i] = (char*)malloc(sizeof(char) * 100);
    for (int i = 0; i < 6; i++)scanf("%s", str[i]);
}

int main() {

    char* str[6];

    makeArrayandInput(&str);

    // 출력
    for (int j = 0; j < 6; j++)
    {
        printf("%s\n", str[j]);
    }

    // 동적할당 free
    for (int i = 0; i < 6; i++) free(str[i]);

    return 0;
}
