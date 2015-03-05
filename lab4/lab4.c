#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//MENU enum definition
typedef enum MENU {
	SINE,
	COSINE,
	TANGENT,
	QUIT
} menu_t;

/*
 * Michael Shihrer
 * Lab 4, CSCI 112
 * 5 Mar 15
 */

//Function prototypes
void userMenu();
bool is_valid(menu_t input);
double computeSin(double angle);
double computeCos(double angle);
double computeTan(double angle);

int main(void)
{
}

void userMenu()
{
	//Menu variable
	menu_t input;
	do
	{
		print("Please choose an option: (0) Sine (1) Cosine (2) Tangent (3) QUIT\n");
		print("Enter your choice > ");

		scanf("%d",&input);
	}while(!is_valid(input));
}

bool is_valid(menu_t input)
{
	return true;
}

double computeSin(double angle)
{
	return 0.0;
}

double computeCos(double angle)
{
	return 0.0;
}

double computeTan(double angle)
{
	return 0.0;
}
