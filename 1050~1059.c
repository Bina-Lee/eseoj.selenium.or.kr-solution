//1050
#include <stdio.h>

int sumofEvenandMaxIdx(int arr[], int n) {
// 이 부분에 코드를 작성하시오. ===========================


    
    int cnt=0;
    int max=-100;
    int maxindex=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cnt=cnt+i;
            if(max<arr[i]){
                maxindex=i;
                max=arr[i];
            }
        }
    }
    cnt=cnt+maxindex;
    return cnt;


// =============================================
}


int main() {

    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", sumofEvenandMaxIdx(arr, n));


    return 0;
}

////////////////////////////////////////////////////

//1051

////////////////////////////////////////////////////

//1052
#include <stdio.h>

int main() {

int arr[10];

// 이 부분에 코드를 작성하시오. ===========================



    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>=0)arr[i]=1;
        else arr[i]=0;
    }



// ==============================================

for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

////////////////////////////////////////////////////

//1053
#include <stdio.h>


int eseStrlen(char string[]) {
    int checkese=0;
    int value=0;
    for(int i=0;i<100;i++){
        if(string[i]=='!'){
            value=i;
            break;
        }
        if(string[i]=='e')if(string[i+1]=='s')if(string[i+2]=='e')checkese++;
        if(string[i]==0){
            value=i;
            break;
        }
    }
    if(checkese)value=value*10;
    return value;
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}

////////////////////////////////////////////////////

//1054
#include <stdio.h>


int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============
 

    int len=0;
    for(int i=0;i<100;i++){
        if(string[i]==0){
            len=i;
            break;
        }
    }
    
    int cnt=0;
    for(int i=0;i<len;i++){
        if(string[i]=='!'){
            len=i;
            break;
        }
        else if(string[i]>='A'&&string[i]<='Z')cnt++;
    }
    if(cnt!=0)len=len*cnt;
    return len;



    // ==================================
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}

////////////////////////////////////////////////////

//1055,1056
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int** arr1=(int**)malloc(sizeof(int*)*a);
    for(int i=0;i<a;i++)arr1[i]=(int*)malloc(sizeof(int)*b);
    for(int i=0;i<a;i++)for(int j=0;j<b;j++)scanf("%d",&arr1[i][j]);
    
    int c,d;
    scanf("%d %d",&c,&d);
    int** arr2=(int**)malloc(sizeof(int*)*c);
    for(int i=0;i<c;i++)arr2[i]=(int*)malloc(sizeof(int)*d);
    for(int i=0;i<c;i++)for(int j=0;j<d;j++)scanf("%d",&arr2[i][j]);

    if(b!=c){
        printf("Unavaliable");
        return 0;
    }
    
    int** result=(int**)malloc(sizeof(int*)*a);
    for(int i=0;i<a;i++)result[i]=(int*)malloc(sizeof(int)*d);
    
    for(int i=0;i<a;i++)for(int j=0;j<d;j++)result[i][j]=0;
    
    for(int i=0;i<a;i++)for(int j=0;j<d;j++)for(int k=0;k<b;k++)result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<a;i++)free(arr1[i]);
    free(arr1);
    for(int i=0;i<c;i++)free(arr2[i]);
    free(arr2);
    for(int i=0;i<a;i++)free(result[i]);
    free(result);
}

////////////////////////////////////////////////////

//1057

////////////////////////////////////////////////////

//1058
#include<stdio.h>
int main(){
    char arr[100];
    gets(arr);
    int len=0;
    for(int i=0;i<100;i++){
        if(arr[i]==0){
            len=i;
            break;
        }
    }
    for(int i=0;i<len/2;i++){
        char temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
    if(arr[len-1]>='a')arr[len-1]=arr[len-1]-32;
    printf("%s",arr);
}

////////////////////////////////////////////////////

//1059
#include <stdio.h>
#include <math.h>

int makeDataOne(int _data, int _n){
    if(!((_data>>(_n-1))&0x01))_data=_data+pow(2,_n-1);
    return _data;
}

int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataOne(data, n));

    return 0;
}
