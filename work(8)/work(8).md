순환함수
#include <stdio.h>

int fib(int a) {
	int f1 = 1;
	int f2 = 1;
	if (a <= 2)
		return 1;
	else {
		int f3=0;
		for (int i = 3; i <= a; i++) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		return f3;
	}
}

int main() {
	int q;
	for (int N = 1; N <=40; N++) {
		q=fib(N);
	}
	return 0;
}

재귀함수
#include <stdio.h>

int fib(int a) {
	if (a <= 2)
		return 1;
	return fib(a - 1) + fib(a - 2);
}

int main() {
	for (int N=1; N <= 40; N++) {
		int q = fib(N);
	}
	return 0;
}

해당 코드들은 1부터 40번째 까지의 피보나치 수열을 각각 순환함수, 재귀함수를 통해 구하는 코드이다.

순환함수를 통해 피보나치 수열을 구하였을 때의 프로파일링 결과는 다음과 같다.


실행 소요시간 및 점유율, 호출 횟수

<img width="759" height="95" alt="image" src="https://github.com/user-attachments/assets/dc7ccdef-861e-4c0a-880a-f45f2e0e6b29" />

시간 점유율에 따른 플레임 그래프
<img width="1907" height="70" alt="image" src="https://github.com/user-attachments/assets/971df59c-3c60-4c5a-851c-5e8764d65a6e" />

해당 자료에 따르면 40까지의 피보나치 수열을 구하는데 총 8마이크로초가 소요되었고, 피보나치 수열을 구하는 fib 함수의 호출 횟수는 40회로 나타났다.
이중 fib 함수는 3마이크로초 소요, 점유율은 37.5%를 차지하였다. 이는 플레임 그래프에도 반영되어 fib함수가 main함수 점유율의 37.5%를 차지하는 것을 알 수 있다.


재귀함수를 통해 피보나치 수열을 구하였을 때의 프로파일링 결과는 다음과 같다.


실행 소요시간 및 점유율, 호출 횟수
<img width="910" height="829" alt="image" src="https://github.com/user-attachments/assets/26f77531-bf7e-4af9-b2e5-df3e461d9457" />
<img width="676" height="81" alt="image" src="https://github.com/user-attachments/assets/ac85506a-8705-4104-b91f-73cc5ec55053" />

시간 점유율에 따른 플레임 그래프
<img width="1879" height="632" alt="image" src="https://github.com/user-attachments/assets/d4b5e7fe-66c7-473e-83cc-1f3ff92107d3" />

재귀함수를 통해 피보나치 수열을 구하는데는 총 43.57초가 소요되었고, fib 함수의 호출 횟수는 535,828,550회로 나타났다.
이중 fib 함수의 소요시간은 프로그램 소요 시간인 43.57초를 거의 모두 점유하고 있으며, main 함수의 소요시간은 6.8마이크로초로 나타났다.
플레임 그래프에서는 fib 함수에 사용되는 n의 크기에 따라 함수의 점유율이 변화하고 있는 것을 보이고 있다.


이 두개의 방법을 종합하여 보았을 때, 재귀함수를 통한 피보나치 수열의 계산은 순환함수를 사용하여 계산하는 것 보다 5,446,250배의 시간이 더 소요되었고, fib 함수의 호출 횟수가 13,395,713.75배 많은 것을 확인할 수 있다.

결론적으로, 순환함수를 통한 구현은 재귀함수에 비해 복잡한 설계를 가졌으나, fib 함수를 1회 반복에 한번 호출하기 때문에 소요되는 시간 및 함수의 호출 횟수는 매우 낮다.
재귀함수를 통한 구현은 순환함수에 비해 간단한 설계를 가졌으나, fib 함수의 호출 횟수가 반복 횟수에 따라 기하급수적으로 늘어나기 때문에 소요되는 시간 및 함수의 호출 횟수는 매우 높다.
