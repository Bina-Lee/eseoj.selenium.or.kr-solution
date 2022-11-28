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
