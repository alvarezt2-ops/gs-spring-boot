#include <stdio.h> //library (Preprocessor directive)
#define PI 3.14159

int main() {
	double radius; //input
	double area; //output
	double circumference; //outputs
	
	printf("Please enter the radius\n");	
	scanf("%lf", &radius);

	area = PI * radius * radius;
	
	circumference = 2 * PI * radius;

	printf("This is the radius: %f and the area: %lf\n", radius, area);
	printf("Circumference is: %lf\n", circumference);
	return 0;
}
