#include <stdio.h>
#include <float.h>

int main(){
    float num1 = FLT_MIN; //float의 양수 최솟값
    float num2 = FLT_MAX; //float의 양수 최댓값

    //float의 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생
    num1 = num1 / 100000000.0f;
    
    // float의 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
    num2 = num2 * 1000.0f;

    printf("%e %e\n", num1, num2); 
    // 0.000000e+00 inf: 실수의 언더플로우는 0
    // 오버플로우는 무한대가 됨

    return 0;

    // FLT_MIN을 100000000.0과 같이 큰 수로 나누면 아주 작은 수가 되면서 언더플로우가 발생하는데 C 언어에서는 실수 언더플로우를 0 또는 쓰레기 값으로 처리합니다.
    // 반대로 FLT_MAX에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서기 때문에 오버플로우가 발생합니다. 
    // 정수와는 달리 실수는 오버플로우가 발생했을 때 최솟값으로 되돌아가지 않고 무한대(infinity)가 되므로 inf가 출력됩니다.


}