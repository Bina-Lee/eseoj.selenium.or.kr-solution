//1040
#include<stdio.h>
int main() {
    unsigned int a;
    int* poa = &a;
    char* pob = poa;
    scanf("%u", &a);
    unsigned int b;
    int* poc = &b;
    char* pod = poc;

    for (int i = 0; i < 4; i++) {
        *(pod + i) = *(pob + 3 - i);
    }
    printf("%u", b);
}

////////////////////////////////////////////////////

//1047
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0)printf("negative");
    else for(int i=0;i<=n;i++)printf("%d ",i);
}

////////////////////////////////////////////////////

//1048
#include <stdio.h>
 
 
// ===============================================
// 이 부분에 필요한 코드를 작성하시오.
int sub(int x,int y){
    return x-y;
}
// ===============================================
 
 
int main() {
 
 
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sub(a, b));
 
 
    return 0;
}


////////////////////////////////////////////////////

//1049
#include <stdio.h>
#include <stdlib.h>
 
int diffMaxMin(int arr[], int n) {
// 이 부분에 코드를 작성하시오. ===========================
    int min=0,max=0,minvalue=100000,maxvalue=-100000;
    for(int i=0;i<n;i++){
        if(arr[i]>maxvalue){
            maxvalue=arr[i];
            max=i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<minvalue){
            minvalue=arr[i];
            min=i;
        }
    }
    int res=max-min;
    if(res<0)res=-res;
    return res;
// ========================================================
}
 
 
int main() {
 
    int n;
    int arr[100];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("%d", diffMaxMin(arr, n));
    return 0;
}
