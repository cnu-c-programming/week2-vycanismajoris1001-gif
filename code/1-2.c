#include <stdio.h>

int main()
{
   // 첫 줄 헤더 출력
   printf("%10s %10s %10s\n", "name", "id", "value");
   
   // 데이터 출력: % 011d에서 공백을 제거하여 %010d로 수정하거나 
   // 문제의 기대값(10자리 0채우기)에 맞춰 조정합니다.
   printf("%10s %010d %10.2f\n", "kim", 12, 4.12);
   printf("%10s %010d %10.2f\n", "lee", 1922, 3.21);
   printf("%10s %010d %10.2f\n", "park", 432, 1.00);
   
   return 0;
}
