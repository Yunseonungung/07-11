#include <stdio.h>

  int main(void) {
  int num=0;
  int sum = 0;
  int count = 0;
  double avg = 0.0;

  printf("몇개를 입력하시겠습니까? ");
  scanf("%d", &count);
  
  while( num <= count) 
  {
  sum += num;
  num++;

  printf("다음 정수를 입력하세요: ");
  scanf("%d", &num);
  }
  

  if (count > 0) 
  {
  avg = (double)sum / count;
  }

  printf("입력된 자료의 개수:%d\n", count);
  printf("입력된 자료의 합계:%d\n", sum);
  printf("입력된 자료의 평균:%.2f\n", avg);

  return 0;
}
