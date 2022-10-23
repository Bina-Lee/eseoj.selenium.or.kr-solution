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
