#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>

//1.  크기가 10인 정수 배열 생성
      //1) 배열 원소 출력
      //2) 배열의 원소중 가장 큰 수 출력
      //3) 배열 원소 합 출력
      //4) 배열 원소 중 홀수 만 출력
      //5) 배열 원소중 짝수만 덧셈 출력

int main(void){

    int ar[10];

    printf("배열 원소 출력\n");
    for(int i = 0; i<10;i++){
        ar[i] = i;
        printf("ar[%d] = %d\n",i,ar[i]);
    }

    printf("\n\n배열의 원소 중 가장 큰 수 출력\n");
    int max = ar[0];
    for(int i=1;i<10;i++){
        if(ar[i] > max){
            max = ar[i];
        }
    }
    printf("가장 큰 수는 %d\n",max);

    printf("\n\n배열 원소의 합 출력\n");
    int sum = 0;
    for(int i = 0; i<10;i++){
        sum += ar[i];
    }
    printf("sum = %d\n",sum);

    printf("\n\n배열의 원소 중 홀수만 출력\n");
    for(int i = 0; i<10;i++){
        if(ar[i]%2 == 1){
            printf("ar[%d] = %d\n",i,ar[i]);
        }
    }

    printf("\n\n배열의 원소 중 짝수의 합 출력\n");
    sum = 0;
    for(int i=0;i<10;i++){
        if(ar[i]%2==0){
            sum += ar[i];
        }
    }
    printf("짝수의 합 = %d\n",sum);


    return 0;
}