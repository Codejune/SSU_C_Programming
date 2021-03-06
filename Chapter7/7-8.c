/*
	피타고라스의 정리는 직각 삼각형에서 직각을 낀 두변의 길이를 A, B라고 하고,  빗변의 길이를 C라고 하면 C^2 = A^2 + B^2 의 수식이 성립한다는 것이다.
	각 변의 길이가 100보다 작은 삼각형 중에서 피타고라스의 정리가 성립하는 직각 삼각형은 몇 개나 있는가?
	또한 해당 직각 삼각형의 A, B, C는 무엇인가?
	출력은 (A, B, C)로 출력한다.
*/
#include <stdio.h>
void main()
{
	int a, b, c,count=0;
	for (a = 1; a < 100; a++) {
		for (b = 1; b < 100; b++) {
			for (c = 1; c < 100; c++) {
				if (a*a + b*b == c*c)	{
					count++;
					printf("(%d, ,%d ,%d)\n", a, b, c);
					/*
					//적절한 직각삼각형 구하기
					if(c>a && c>b){
						count++;
						printf("(%d, ,%d ,%d)\n", a, b, c);
					}
					*/
				}
			}
		}
	}
	printf("길이가 100보다 작은 피타고라스의 정리가 성립하는 삼각형의갯수=%d", count);
}