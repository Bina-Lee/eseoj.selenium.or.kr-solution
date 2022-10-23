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

////////////////////////////////////////////////////

//1049
