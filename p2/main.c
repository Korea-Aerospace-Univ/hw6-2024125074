#include <stdio.h>

int main(void) {

int arr1[20] =  {};
int arr2[20] = {};
int N;
int *p = nullptr;
int *q = nullptr;

scanf("%d",&N);
for(p=arr1;p<arr1+N;p++){
    scanf("%d",p);
}

for(q=arr2;q<arr2+N;q++){
    scanf("%d",q);
}


for(q = arr2 + N - 1, p = arr1; q >= arr2,p <arr1 + N; q--, p++){
    printf(" %d",*p + *q);
}


return 0;
}
