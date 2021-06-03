//ŠÖ”’è‹`
#include<stdio.h>
void nextLine() {
	printf("\n");
}
void nextLines(int num) {
	for (int i = 0; i < num; i++) {
		nextLine();
	}
}
void dispInt(int a) {
	printf("%d", a);
}
void dispFloat(float a) {
	printf("%f", a);
}
int add(int a, int b) {
	return a + b;
}
float div(float a, float b) {
	return a / b;
}
void setZeroInt(int* p) {
	*p = 0;
}
struct V{
	int x;
	int y;
};
void setZeroStruct(struct V* p) {
	p->x = 0;
	p->y = 0;
}
void setZeroArray(int num, int* p) {
	for (int i = 0; i < num; i++) {
		p[i] = 0;
	}
}
void setZeroStructArray(int num, struct V* p) {
	for (int i = 0; i < num; i++) {
		p[i].x = 0;
		p[i].y = 0; 
	}
}