//1039
#include <stdio.h>

void printMBTI(unsigned char _data){
    for(int i=3;i>=0;i--){
        if(_data>>i&0X01){
            switch(i){
                case 3:printf("I");break;
                case 2:printf("N");break;
                case 1:printf("F");break;
                case 0:printf("P");break;
            }
        }
        
        else{
            switch(i){
                case 3:printf("E");break;
                case 2:printf("S");break;
                case 1:printf("T");break;
                case 0:printf("J");break;
            }
        }
    }
}

int main()
{

    int input;
    unsigned char data;

    scanf("%d", &input);
    data = (unsigned char)input;

    printMBTI(data);

    return 0;

}
