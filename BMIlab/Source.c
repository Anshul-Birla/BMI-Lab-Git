#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calcBMI();
FILE *fp;
int main(void)
{
	fp = fopen("bmilab.txt", "w");
	int i;
	for (i = 1; i <= 4; ++i)
	{
		calcBMI();
	}
	fclose(fp);
	return 0;
}

void calcBMI()
{
	printf("What is your height in inches?\n");
	float height, weight, bmi;
	scanf("%f", &height);
	printf("What is your weight in pounds?\n");
	scanf("%f", &weight);
	bmi = (weight * 703.0) / height / height;
	printf("Your BMI is %f\n", bmi);
	fprintf(fp,"With a weight of %.1f, a height of %.1f, you have a BMI of %.1f and ", weight, height,bmi);
	if (bmi < 18.5)
	{
		printf("you are underweight\n");
		fprintf(fp,"you are underweight\n");
	}
	if (bmi > 18.5 && bmi < 25.0)
	{
		printf("you are normal\n");
		fprintf(fp, "you are normal\n");
	}
	if (bmi > 25.0 && bmi < 30.0)
	{
		printf("you are overweight\n");
		fprintf(fp, "you are overweight\n");
	}
	if (bmi > 30.0)
	{
		printf("you are obese\n");
		fprintf(fp, "you are obese\n");
	}
}
