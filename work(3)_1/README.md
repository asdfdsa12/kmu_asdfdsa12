분수 추상 자료형(Fraction ADT)

데이터 구성 -
    분자(numerator): 정수형(int)
    분모(denominator): 정수형(int)

연산 -
    gcd(int a, int b): 최소공약수 찾기
    sim(ADT f): 분수의 기약분수화
    operate(ADT f1, char oper, ADT f2): f1와 f2끼리 oper에 들어간 연산자에 맞는 연산을 진행
    check(char* v): 입력한 숫자가 소수인지 확인하고 맞을 시엔 분자를 입력한 값의 10000배, 분모를 10000으로 설정하고 기약분수화. 소수가 아닐 시엔 분수 그대로 설정. 정수일땐 구조체를 미리 분자 0, 분모 1로 초기화하여 분자에 입력한 정수가 들어감.
