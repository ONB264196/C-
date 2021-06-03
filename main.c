#include"stdio.h"
#include"myfunc.h"
//メイン
/*
int main() {
	int a[3];
	int* p;
	p = a;
	for (int i = 0; i < 3; i++) {
		a[i] = i + 1;
		p[i] = 0;
		printf("%2d", a[i]);
	nextLines(1);
	}

	system("pause>0");
	return 0;
}
*/

int main() {
	int num;
	printf("1 or 2のいずれかをタイプしてください:");
	scanf_s("%d", &num);
	
	switch (num) {
	case 1:
		printf("one\n");
		break;
	case2:
		printf("two\n");
	    break;
	case3:
		printf("error\n");
		break;
	}	
	system("pause>0");
	return 0;

}