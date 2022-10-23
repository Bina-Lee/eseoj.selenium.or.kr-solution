//1000
#include <stdio.h>
int add(int x, int y){
    return x+y;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", add(a, b));
    return 0;
}

////////////////////////////////////////////////////

//1001
#include <stdio.h>
 
void printCalc(int _input1, int _input2) {
// 이 부분을 구현하라 =====================
    int y1=_input2/10;
    int y2=_input2%10;
    printf("%d\n",_input1*y2);
    printf("%d\n",_input1*y1);
    printf("%d\n",_input1*_input2);
// ========================================
}
 
 
int main() {
    int input1, input2;
    scanf("%d %d", &input1, &input2);
 
    printCalc(input1, input2);
 
    return 0;
}


////////////////////////////////////////////////////

//1002
#include <stdio.h>

void printBinary(unsigned int _x) {
    for(int i=7;i>=0;i--){
        if(( (unsigned char)_x >> i) & 0X01) printf("1");
        else{
            printf("0");
        }
    }
}

    int main() {
    unsigned int x;
    scanf("%d", &x);
    printBinary(x);
    return 0;
}

////////////////////////////////////////////////////

//1003
#include <stdio.h>

int countBinaryOne(unsigned int _data) {
    unsigned char arr[10];
    for(int i=9;i>=0;i--){
        arr[i]=_data%10;
        _data=_data/10;
    }
    int count=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            if((arr[i] >> j) & 0X01) count++;
        }
    }
    return count-1;
}


int main() {
    unsigned int data;
    scanf("%d", &data);
    printf("%d", countBinaryOne(data));
    return 0;
}

////////////////////////////////////////////////////

//1004
#include <stdio.h>
 
void printModifiedData(unsigned int _a, int _N) {
 
// 이 부분을 작성하라 ==========================
    for(int i=0;i<_N*2;i++){
        _a=_a/16;
    }
    for(int i=0;i<_N*2;i++){
        _a=_a*16;
    }
    printf("%08X",_a); 
// =============================================
}
 
int main()
{
    unsigned int a = 0X12345678; //예시
    int N = 0;
 
    scanf("%X", &a); // 16진수 형태의 숫자 입력
    scanf("%d", &N); // 1~4의 숫자
 
    printModifiedData(a, N);
 
    return 0;
}


////////////////////////////////////////////////////

//1005
#include<stdio.h>

void drawBox(unsigned char _data[]) {
    for(int i=0;i<4;i++){
        for(int j=7;j>=0;j--){
            if(_data[i]>>j&0X01)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int main() {

    unsigned char data[4] = { 0XFF, 0X12, 0X34, 0X01 }; // 예시
    int input = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%X", &input);
        data[i] = (char)input;
    }
    drawBox(data);
    return 0;
}
