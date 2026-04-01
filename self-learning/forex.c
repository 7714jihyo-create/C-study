#include <stdio.h>

int main() {
	int a[5] = { 9,1,7,3,5 };
	int i, j, min, t;
	for (i = 0;i < 4;i++) {
		min = i; // 현재 위치 i를 최소값 위치로 가정
		for (j = i + 1;j < 5;j++) { // i+1부터 끝까지 탐색하면서 최소값 찾기
			if (a[j] < a[min]) {
				min = j; // 더 작은 값 있으면 min에 바꿔치기
			}
		}
		t = a[i]; // 현재 위치 값 저장
		a[i] = a[min]; // 최소값 앞으로 이동
		a[min] = t; // 기존 값 최소값 위치로 이동

	}
	for (i = 0;i < 5;i++) {
		printf("%2d", a[i]); //정렬된 배열 출력하는 반복문
	}

	return 0;
}