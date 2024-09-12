#include <stdio.h>
int main(){
	float a, b;
	printf("Enter the length of the rectangle (a):");
	scanf("%f", &a);
	printf("Enter the width of the rectangle (b):");
	scanf("%f", &b);
	float min_dim = (a < b) ? a : b;
	int horizontal_circles=(int)(a/min_dim);
	int vertical_circles=(int)(b/min_dim);
	int total_circles=horizontal_circles*vertical_circles;
	printf("maximum number of big circles that can fit inside the rectangle: %d\n", total_circles);
	return 0;
}
