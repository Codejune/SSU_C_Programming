/*
    다음 프로그램을 실행시켜보고 실행결과가 0.000000이 나오는 이유를 설명하라.
    : double형의 유효숫자는 16자리 이지만 1.0e20은 유효숫자가 20자리이다.
      따라서 정확한 값으로 표현할 수 없어서 10000000000000000005는 1000000000000000으로 출력된다.
*/
#include "stdio.h"
int main(void){
	long double x;
	x = (1.0e20 + 5.0);
	printf("%Lf\n", x);
	return 0;
}
