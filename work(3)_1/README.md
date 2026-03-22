분수 추상 자료형(Fraction ADT)

구조체 ADT -
    분자(num): 정수형(int)
    분모(den): 정수형(int)

연산 -
    int gcd(int a, int b): 두 정수의 최대공약수를 유클리드 호제법을 통해 찾음, a와 b에는 각각 분자와 분모가 들어감
    ADT sim(ADT f): 분수를 기약분수로 만듦
    ADT operate(ADT f1, char oper, ADT f2): f1와 f2끼리 oper에 들어간 연산자에 맞는 연산을 진행
    ADT check(char* v): 입력된 문자열이 어떤 형태의 숫자인지 분석하고 ADT로 변환함. 소수일시 분자 = 입력값*10000, 분모 = 10000 후 기약분수화, 정수일시 구조체를 {0,1}로 초기화했기에 분자에 입력값, 분모에 1이 할당됨.
