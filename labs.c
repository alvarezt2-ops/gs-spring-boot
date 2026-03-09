#include <stdio.h> //library (Preprocessor directive)
#define PI 3.14159

int main(void) {
	double inner_Diam, outer_Diam;
	double material_Density;
	double inner_Radius, outer_Radius;
	double rimArea;
	double volume;
	double washerWeight;
	double batchWeight;

	int thickness;
	int quantity_Manufactured;

	printf("Please enter the inner diameter in centimeters: ");
	scanf("%lf", &inner_Diam);

	printf("Please enter the outer diameter in centimeters: ");
	scanf("%lf", &outer_Diam);

	printf("Please enter the thickness in centimeters: ");
	scanf("%d", &thickness);

	printf("Please enter the density in (grams/cm^3): ");
	scanf("%lf", &material_Density);

	printf("Please enter the quantity manufactured: ");
	scanf("%d", &quantity_Manufactured);

	inner_Radius = inner_Diam / 2.0;
	outer_Radius = outer_Diam / 2.0;
	
	rimArea = PI * (outer_Radius * outer_Radius - inner_Radius * inner_Radius);

	volume = rimArea * thickness;

	washerWeight = volume * material_Density;

	batchWeight = washerWeight * quantity_Manufactured;

	printf("\nthis is the rim area: %.2f\n", rimArea);
	printf("\nthe weight of a flat washer is: %.2f\n", washerWeight);
	printf("\nThe weight of the bash of washers is: %.2f\n", batchWeight);

	return 0;
}	

