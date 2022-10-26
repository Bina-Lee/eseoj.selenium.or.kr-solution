//1090 example
#include <stdio.h> 


void SWAP(char* p){
    char* pnt=p;
    int cnt1=0;
    while(*(pnt+cnt1)!=0){
        if(*(pnt+cnt1)=='a')if(*(pnt+cnt1+1)=='n')if(*(pnt+cnt1+2)=='d'){
            *(pnt+cnt1)='&';
            int cnt2=1;
            while(1){
                *(pnt+cnt1+cnt2)=*(pnt+cnt1+cnt2+2);
                if(*(pnt+cnt1+cnt2+2)==0)break;
                cnt2++;
            }
        }
        cnt1++;
    }
} 


int main() { 
     char text[50]; 
     scanf("%s", text);
     SWAP(text); 
     printf("%s", text); 
     return 0;
}

////////////////////////////////////////////////////

//1090 without function
#include<stdio.h>
int main() {
    char text[50];
    scanf("%s", text);
    for (int i = 0; i < 50; i++) {
        if (text[i] == 'a')if (text[i + 1] == 'n')if (text[i + 2] == 'd') {
            text[i] = '&';
            for (int j = i + 1; j < 50; j++)text[j] = text[j + 2];
        }
        else if (text[i] == 0)break;
    }
    printf("%s", text);
}
