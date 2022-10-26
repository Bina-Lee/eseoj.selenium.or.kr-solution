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
