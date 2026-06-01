#include <stdio.h>

int main(void)
{   
    char arr[11]={};
    int count, maxWcount=0;
    char *p, *q;
    char W,maxW;
    
    scanf("%10s",arr);
        
    for (p=arr; p<arr+10; p++) {
        count=0;
        for (q=arr; q<arr+10; q++) {
            if (*p==*q) {
                count++;
            }
        }
        if (count>maxWcount) {
            maxWcount=count;
            maxW=*p;
        }
    }
    
    printf("%c %d",maxW,maxWcount);
   

    return 0;
}
