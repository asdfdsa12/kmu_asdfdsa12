사용한 GCD 알고리즘 :
    int GCD(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

시간 복잡도 계산:
    while (b != 0)        -> log n+1
    int temp = a % b      -> log n
    a = b                 -> log n
    b = temp              -> log n
    return a              -> 1
                          -> O(log n)
    
    최선의 경우(Big-Ω):
        a가 b로 한번에 나누어 떨어질 때(ex. 1, 1) -> O(1)

    최악의 경우(Big-O):
        a와 b가 피보나치 수열에서의 연속된 수일 때(ex. 5, 3) -> O(log n)

        두 수는 두번의 반복을 거치면 값이 1/2 이하로 줄어듦.
        또한, 피보나치 수를 유클리드 호제법에 사용할 경우 값이 줄어드는 비율이 일정함.
        그렇기에 반복 횟수는 어림잡아 log n이 됨을 예측할 수 있음.

    평균의 경우(Big-θ):
        대부분의 입력에서 로그시간 내에 수렴 -> O(log n)
