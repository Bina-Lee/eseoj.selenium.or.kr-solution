//1070
#include <stdio.h>

void changeUpDown(char data[]) {
// 이 부분을 작성하시오 ===============================
    for(int i=0;i<100;i++){
        if(data[i]==0)break;
        else if(data[i]>='a'&&data[i]<='z')data[i]=data[i]-32;
        else if(data[i]>='A'&&data[i]<='Z')data[i]=data[i]+32;
        else data[i]='*';
    }
// ====================================================
}

int main() {

    char data[100];
    scanf("%s", data);

    changeUpDown(data);
    printf("%s", data);

    return 0;
}

////////////////////////////////////////////////////

//1071
#include <stdio.h>
#define SIZE 100

void printSort(int list[], int n){
    for(int i=1;i<n;i++){
        int ind=i-1;
        int smaller=list[i-1];
        
        for(int j=i;j<n;j++){
            if(smaller>list[j]){
                smaller=list[j];
                ind=j;
            }
        }
        
        int temp=list[i-1];
        list[i-1]=list[ind];
        list[ind]=temp;
        for(int j=0;j<n;j++){
            printf("%d ",list[j]);
        }
        printf("\n");
    }
}

int main()
{
    int list[SIZE];

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printSort(list, n);

    return 0;
}

////////////////////////////////////////////////////

//1073
#include <stdio.h>
#define SIZE 100

void printSort(int list[], int n){
    for(int i=1;i<n;i++){
        int ind=i-1;
        int bigger=list[i-1];
        
        for(int j=i;j<n;j++){
            if(bigger<list[j]){
                bigger=list[j];
                ind=j;
            }
        }
        
        int temp=list[i-1];
        list[i-1]=list[ind];
        list[ind]=temp;
        for(int j=0;j<n;j++){
            printf("%d ",list[j]);
        }
        printf("\n");
    }
}

int main()
{
    int list[SIZE];

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printSort(list, n);

    return 0;
}

////////////////////////////////////////////////////

//1074
#include <stdio.h>
#define MAX 100
 
int main() {
 
    unsigned int arr[MAX][2];
    int n = 0;
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
 
    // 이 부분에 코드를 작성하세요. ===========================
    for (int i = 0; i < n; i++) {
        int count = 0;
        int check = 0;
        switch (arr[i][0]) {
        case 10:
            for (int j = 0; j < 30; j++) {
                if (arr[i][1] == 0)break;
                if (arr[i][1] % 10 == 0)count++;
                arr[i][1] = arr[i][1] / 10;
            }
            break;
        case 2:
            for (int j = 31; j >= 0; j--) {
                if (arr[i][1] >> j & 0x01)check++;
                if ((!(arr[i][1] >> j & 0x01)) && check)count++;
            }
            break;
        case 16:
            for (int j = 7; j >= 0; j--) {
                if (arr[i][1] >> (j*4) & 0x0F)check++;
                if (!(arr[i][1] >> (j * 4) & 0x0F) && check)count++;
            }
            break;
        default:
            break;
        }
        printf("%d ", count);
    }
    // ========================================================
 
    return 0;
}


////////////////////////////////////////////////////

//1075
#include <stdio.h>
#define MAX 100

int main() {

    unsigned int arr[MAX][2];
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 이 부분에 코드를 작성하세요. ===========================
    for(int i=0;i<n;i++){
        int cnt=0;
        if((arr[i][0]==10)||(arr[i][0]==2)||(arr[i][0]==16)){
            while(1){
                if(arr[i][1]==0)break;
                if(arr[i][1]%arr[i][0]==0)cnt++;
                arr[i][1]=arr[i][1]/arr[i][0];
            }
        }
        printf("%d ",cnt);
    }
    // ========================================================

    return 0;
}

////////////////////////////////////////////////////

//1078
#include<stdio.h>
int main() {
    int arr[50][50];
    int n = 0;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0)printf("%d ", cnt);
            else printf("%d ", cnt + n - 1 - 2 * j);
            cnt++;
        }
    }
}
