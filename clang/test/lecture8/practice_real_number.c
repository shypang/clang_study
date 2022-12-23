#include <stdio.h>


int main(){
    float num1 = 1.97f;
    long double num2 = 5.524218l;
    double num3 = 3792.8e+4;

printf("%f %Lf %f\n", num1, num2, num3);
return 0;

// 다음 소스 코드를 완성하여 1.970000 5.524218 37928000.000000이 출력되게 만드세요.
// 실수 자료형으로 변수를 선언하는 문제입니다. 여기서 저장하는 실수의 맨 뒤에 f가 붙어있다면 float, l이 붙어있다면 long double, 아무것도 붙어있지 않다면 double입니다.

}