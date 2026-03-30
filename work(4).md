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
    while (b != 0)        -> n+1
    int temp = a % b      -> n
    a = b                 -> n
    b = temp              -> n
    return a              -> 1
                          -> O(n)
    
    최선의 경우(Big-Ω):
        a가 b로 한번에 나누어 떨어질 때(ex. 1, 1) -> O(1)

    최악의 경우(Big-O):
        a와 b가 피보나치 수열에서의 연속된 수일 때(ex. 5, 3) -> O(log n)

        while (b != 0)
        temp = 3
        a = 5
        b = 3

        while (b != 0)
        temp = 2
        a = 3
        b = 2

        while (b != 0)
        temp = 1
        a = 2
        b = 1
        
        while (b != 0)
        temp = 0
        a = 1
        b = 0

        while (b != 0)
        return 0

        -> 실행횟수 18번, 반복횟수 5번


    평균의 경우(Big-θ):
        대부분의 입력에서 로그시간 내에 수렴 -> O(log n)