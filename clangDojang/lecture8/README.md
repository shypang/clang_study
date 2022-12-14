변수 선언하기

변수는 자료형 변수이름 형식으로 선언합니다. 변수 여러 개를 한 번에 선언할 때는 자료형 변수1, 변수2, 변수3;과 같이 변수를 콤마로 구분해줍니다.

int num1;
float num2;

int num3, num4, num5;
변수를 선언하고 값 저장하기

변수에 값을 할당(저장)할 때는 변수 = 값; 형식으로 사용합니다.

int num1;
num1 = 10; // 변수에 10 할당(저장)
변수를 선언하면서 초기화하기

변수를 선언하면서 초기화할 때는 자료형 변수 = 값; 형식으로 사용합니다. 변수 여러 개를 선언하면서 초기화할 때는 자료형 변수1 = 값1, 변수2 = 값2;와 같이 변수와 값 할당을 콤마로 구분해줍니다.

int num1 = 10; // 변수를 선언하면서 값 할당(초기화)
int num2 = 20, num3 = 30; // 변수 여러 개를 선언하면서 값 할당(초기화)
자료형 크기 구하기

자료형이나 변수의 자료형 크기를 구할 때는 sizeof 연산자를 사용합니다.

sizeof(int); // 자료형 자체의 크기 구할 때는 반드시 ( )를 지정
int num1;
sizeof(num1); // ( )를 지정하는 방법
sizeof num1; // ( ) 없이 표현식으로 지정하는 방법
정수 자료형의 오버플로우와 언더플로우

부호 있는 정수: 오버플로우가 발생하면 최솟값(음수)부터 다시 시작, 언더플로우가 발생하면 최댓값(양수)부터 점점 작아집니다.
부호 없는 정수: 오버플로우가 발생하면 0부터 다시 시작, 언더플로우가 발생하면 최댓값부터 점점 작아집니다.
limits.h에 정의된 정수 자료형의 최솟값과 최댓값

limits.h 헤더 파일에는 정수 자료형의 최솟값과 최댓값이 정의되어 있습니다.

표 정수 자료형의 최솟값과 최댓값
자료형 최솟값 최댓값
char CHAR_MIN CHAR_MAX
short SHRT_MIN SHRT_MAX
int INT_MIN INT_MAX
long LONG_MIN LONG_MAX
long long LLONG_MIN LLONG_MAX
unsigned char 0 UCHAR_MAX
unsigned short 0 USHRT_MAX
unsigned int 0 UINT_MAX
unsigned long 0 ULONG_MAX
unsigned long long 0 ULLONG_MAX

stdint.h에 정의된 정수 자료형의 최솟값과 최댓값

stdint.h 헤더 파일에는 크기가 표시된 정수 자료형의 최솟값과 최댓값이 정의되어 있습니다.

▼ 표 크기가 표시된 정수 자료형의 최솟값과 최댓값
자료형 최솟값 최댓값
int8_t INT8_MIN INT8_MAX
int16_t INT16_MIN INT16_MAX
int32_t INT32_MIN INT32_MAX
int64_t INT64_MIN INT64_MAX
uint8_t 0 UINT8_MAX
uint16_t 0 UINT16_MAX
uint32_t 0 UINT32_MAX
uint64_t 0 UINT64_MAX

지수 표기법

지수 표기법(과학적 표기법)은 정수 부분은 한 자릿수만 적고, 소수 자릿수 뒤에 e와 지수를 표기합니다.

2.1e+3: 2100
2.1e-2: 0.021

지수 표기법과 부동소수점

지수 표기법은 실수를 소스 코드에 표기하거나 화면에 출력하는 방법이며 부동소수점 방식은 실수를 메모리 또는 디스크에 저장하는 방식입니다.

실수 자료형의 오버플로우와 언더플로우

실수 자료형은 오버플로우가 발생하면 inf(무한대)가 되며 언더플로우가 발생하면 0이 됩니다.

float.h에 정의된 최솟값과 최댓값

float.h 헤더 파일에는 실수 자료형의 최솟값과 최댓값이 정의되어 있습니다.

▼ 표 실수 자료형의 최솟값과 최댓값
자료형 크기 범위
float FLT_MIN FLT_MAX
double DBL_MIN DBL_MAX
long double LDBL_MIN LDBL_MAX
숫자 서식 지정자

printf로 정수나 실수를 출력할 때는 다음과 같은 서식 지정자를 사용합니다.

▼ 표 숫자 서식 지정자
서식 지정자 설명
%d 부호 있는 정수
%ld 부호 있는 long 정수
%lld 부호 있는 long long 정수
%u 부호 없는 정수
%lu 부호 없는 long 정수
%llu 부호 없는 long long 정수
%f float, double형 실수
%Lf long double형 실수
%e float, double형 실수를 지수 표기법으로 출력
%Le long double형 실수를 지수 표기법으로 출력

Q & A

왜 int의 최솟값인 -2,147,483,648을 바로 할당하면 컴파일 에러가 발생하나요?

-는 부호이기도 하지만 음수로 만드는 단항 연산자입니다. 따라서 -를 붙이기 전에 2,147,483,648은 양수입니다. 하지만 부호 있는 정수(signed)의 양수 최댓값은 2,147,483,647이므로 2,147,483,648은 부호 없는 정수(unsigned)가 되어버립니다.

Visual Studio에서는 부호 없는 정수에 단항 마이너스 연산자를 사용하면 에러가 발생합니다(C4146).

https://msdn.microsoft.com/ko-kr/library/4kh09110.aspx
limits.h 헤더 파일에는 INT_MIN이 다음과 같이 정의되어 있습니다.

#define INT_MIN (-2147483647 - 1) /_ minimum (signed) int value _/
부호 있는 정수의 양수 최대 값을 넘지 않는 범위에서 단항 마이너스 연산자를 사용하고, 다시 -1을 빼서 음수 최솟값을 만듭니다.

리눅스에서는 int에 -2,147,483,648를 할당해도 에러가 발생하지 않습니다.

정수 오버플로우는 C 언어 표준에 정의되어 있나요?

C 언어 표준에는 부호 없는 정수와 부호 있는 정수의 오버플로우를 다르게 정의하고 있습니다.

부호 없는 정수(unsigned): 2를 거듭제곱한 값으로 나머지 연산한 값(modulo power of 2)
예) unsigned char에 257을 할당했다면 257 % 28 = 1이므로 1이 됩니다. 28에서 8은 unsigned char의 비트 수입니다.
부호 있는정수(signed): 정의되지 않은 행동(undefined behavior)입니다. 즉, 컴파일러 개발사가 생각하는 가장 효율적이고 최선의 방법으로 구현하도록 자율에 맡깁니다. 따라서 컴파일러에 따라 오버플로우의 값이 다를 수 있습니다.
printf에서 %f로 실수를 출력했을 때 왜 1.000000처럼 항상 소수점 여섯 자리가 표시되나요?

서식 지정자 %f의 소수점 이하 자릿수 출력 기본값이 여섯 자리이기 때문입니다. 서식 지정자의 소수점 자릿수 설정 방법은 '부록 2. 서식 지정자'를 참조하세요.

같은 자료형인데도 운영체제나 플랫폼에 따라 크기가 다른 이유는 무엇인가요?

C 언어는 나온지가 40년이 넘었는데 그동안 운영체제나 CPU가 많이 발전했습니다. 그래서 지금까지 8비트, 16비트, 32비트, 64비트 CPU가 나올 때마다 C 언어 컴파일러도 CPU에 맞게 업데이트가 되었는데, 컴파일러를 만드는 단체나 회사마다 자료형의 크기를 독자적으로 정의했기 때문입니다.

정수 자료형의 long이 대표적인데 마이크로소프트는 데이터 모델로 LLP64/IL32P64를 따르지만 오픈 소스 진영과 애플은 LP64/I32LP64를 따르기 때문에 자료형의 크기가 다릅니다('부록 3. 데이터 모델 참조'). 따라서 자료형의 크기가 달라지는 것에 신경 쓰지 않으려면 stdint.h 헤더 파일을 포함하여 크기가 표시된 정수 자료형을 사용하는 것이 좋습니다.

stdint.h에 int_least32_t, int_fast32_t도 정의되어 있던데 이 자료형은 무엇인가요?

stdint.h 헤더 파일은 운영체제, CPU 등 플랫폼과 컴파일러에 따라 내용이 다릅니다. least가 붙은 자료형은 최소 몇 비트만 만족하면 된다는 뜻입니다. 예를 들어 int_least32_t는 최소 32비트(4바이트)를 만족하면 되고 플랫폼의 특성에 따라 32비트보다 크게 정의되어 있을 수도 있습니다.

fast가 붙은 자료형은 최소 몇 비트를 만족하면서 CPU에서 가장 빠른 성능을 내는 자료형으로 정의되어 있습니다. 예를 들어 Visual Studio 2015의 int_fast16_t는 최소 16비트이지만 32비트 크기의 int로 정의되어 있습니다. 즉, CPU의 특성에 따라 자료형이 정의되며 최소 크기보다 클 수도 있습니다.

숫자 앞자리를 0으로 채우려면 어떻게 해야 하나요?

예를 들어 5자리 우편번호(기초구역번호)를 출력할 때 앞자리를 0으로 채우고 싶다면 %와 d 사이에 0과 최대 자릿수를 지정하면 됩니다. 즉, 다음과 같이 %05d를 지정하면 3299를 출력했을 때 최대 5자리에 앞자리를 0으로 채우므로 03299가 출력됩니다. 자세한 내용은 '부록 2. 서식 지정자'를 참조하세요.

int zipCode = 3299;
printf("%d\n", zipCode); // 3299
printf("%05d\n", zipCode); // 03299: 최대 5자리, 앞자리를 0으로 채움
signed와 unsigned를 섞어서 계산하면 어떻게 되나요?

먼저 char, short, int, long, long long에서 자료형을 크기별로 구분한 것을 랭크(rank)라고 합니다. 이때 signed, unsigned를 섞어서 계산했을 때 같은 랭크이면 unsigned가 우선합니다. 따라서 계산은 unsigned로 되고 결과도 unsigned로 됩니다.

다른 랭크끼리 섞으면 상위 랭크가 우선합니다. 왜냐하면 상위 랭크가 하위 랭크 자료형을 모두 표현할 수 있기 때문입니다. 계산도 상위 랭크 자료형으로 되고 결과도 상위 랭크 자료형이 됩니다(그림 16-3 참조).

마지막으로 상위 랭크 자료형이 하위 랭크 자료형을 모두 표현할 수 없으면 상위 랭크의 unsigned 버전이 사용됩니다. 따라서 결과도 unsigned 버전이 됩니다.

블록에 선언할 수 있는 식별자의 개수는 몇 개인가요?

블록은 여는 중괄호로 시작해서 닫는 중괄호로 끝나는 코드를 말합니다. C 언어 표준은 블록에 선언할 수 있는 식별자(변수, 상수 등) 개수를 511개로 정의하고 있으며 컴파일러마다 최대 개수는 달라질 수 있습니다.
