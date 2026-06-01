#include <stdio.h>

int main(void)
{   
    char arr[10]={}; //문자열 배열 선언과 동시에 초기화
    int count=0, maxWcount=0; //count는 연속되는 문자의 수,maxWcount는 연속된 문자의 최댓값
    char *p, *q; //이중반복문을 위한 두가지 포인터 선언
    char W,maxW; //W는 입력받을 문자,maxW는 가장 많이 나타난 문자
    
    for (p=arr; p<arr+10;p++) //포인터 사용해서 문자 10개 입력받을 때까지 반복
    scanf("%c",p); // 문자 입력받기
        
    for (p=arr; p<arr+10; p++) { //문자 10개까지 반복
        count =0; //문자가 다르면 세는 횟수 초기화 
        for (q=arr; q<arr+10; q++) { //이중반복문 문자 10개까지 반복
            if (*p==*q) { //문자가 같으면
                count++; //연속되는 문자의 수 증가
            }
        }
        if (count>maxWcount) { //만약 연속되는 문자의 수가 최댓값보다 크면
            maxWcount=count; //연속되는 문자의 최댓값 갱신
            maxW=*p; //가장 많이 반복되는 문자에 현재 포인터 값 입력,순서대로 반복되는 반복문 특성에 의해 연속되는 문자의 수가 같은 경우 알아서 먼저 입력받은 문자가 출력
        }
    }
    
    printf("%c %d",maxW,maxWcount); //가장 많이 반복되는 문자와 연속되는 문자의 최댓값 출력
   

    return 0;
}
