//1060
#include <stdio.h>

int makeDataZero(int _data, int _n){
    unsigned int a=_data;
    unsigned int b=_data;
    for(int i=0;i<_n;i++)a=a>>1;
    for(int i=0;i<_n;i++)a=a<<1;
    for(int i=0;i<33-_n;i++)b=b<<1;
    for(int i=0;i<33-_n;i++)b=b>>1;
    _data=a+b;
    return _data;
}

int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataZero(data, n));

    return 0;
}

////////////////////////////////////////////////////

//1061
#include <stdio.h>

int main() {

    unsigned int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]); 
        }
    }

    for(int i=0;i<3;i++){
        int check=0;
        int start=0;
        switch(arr[i][0]){
            case 10:
                for(int j=0;j<10;j++){
                    if(arr[i][1]%10==0)check++;
                    arr[i][1]=arr[i][1]/10;
                    if(arr[i][1]==0)break;
                }
                printf("%d ",check);
                break;
            case 2:
                for(int j=31;j>=0;j--){
                    if((arr[i][1]>>j)&0x01){
                        start++;
                        if((start!=0)&&(arr[i][1])%2==0)check++;
                        arr[i][1]=arr[i][1]>>1;
                    }
                }
                printf("%d ",check);
                break;
            default:
                printf("%d ",0);
                break;
        }
    }

    return 0;
}

////////////////////////////////////////////////////

//1062
#include <stdio.h>

int main() {

    unsigned int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 이 부분에 코드를 작성하세요. ===========================






    for(int i=0;i<3;i++){
        int cnt=0;
        if((arr[i][0]==10)||(arr[i][0]==16)){
            while(1){
                if(arr[i][1]==0)break;
                if(arr[i][1]%arr[i][0]==0)cnt++;
                arr[i][1]=arr[i][1]/arr[i][0];
            }
        }
        printf("%d ", cnt);
    }





    // ==============================================

    return 0;
}

////////////////////////////////////////////////////

//1067
#include <stdio.h>
#include<math.h>

unsigned int makeParity(unsigned int _data){
    unsigned int num231=pow(2,31);
    int count=0;
    for(int i=0;i<31;i++){
        if((_data>>i)&(0x00000001))count++;
    }
    if((count%2 == 1)&&(_data<num231))_data=_data+num231;
    else if((count%2 == 0)&&(_data>=num231))_data=_data+num231;
    return _data;
}

int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}

////////////////////////////////////////////////////

//1068
#include <stdio.h>

unsigned int makeParity(unsigned int _data){
    int cnt=0;
    for(int i=1;i<32;i++){
        if(_data>>i&0x01)cnt++;
    }
    _data=_data>>1;
    _data=_data<<1;
    if(cnt%2==0)_data++;
    return _data;
}

int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}

////////////////////////////////////////////////////

//1069
