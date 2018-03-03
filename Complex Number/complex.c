/*
 * Simple Complex Number Calculator in C language.
 * Add , subtract , multiply and divide complex numbers
 * Author : Sachin Singh
 * Date : 03-03-2018
 * Filename : complex.c
 */

//including necessary library files
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Complex Number Structure
typedef struct complex {
	double real;
	double img;
} Complex;

//Functions Declarations
Complex addComplex(Complex a , Complex b);
Complex subtractComplex(Complex a , Complex b);
Complex multipleComplex(Complex a, Complex b);
Complex divisonComplex(Complex a , Complex b);
void viewComplex(Complex cn);

//menu
int main() {
	int option = 0;
	Complex a,b,result;
	do {
		printf("1. Add Two Complex Numbers.\n");
		printf("2. Subtract Two Complex Numbers.\n");
		printf("3. Multiple Two Complex Numbers.\n");
		printf("4. Divide Two Complex Numbers.\n");
		printf("5. Exit\n\n");
		printf("Enter a Option : ");
		scanf("%d",&option);
		printf("\n");
		switch(option) {
			case 1:
				printf("**Additon of Complex**\n");
				printf("Enter First Complex Number : ");
				scanf("%lf %lf",&a.real,&a.img);
				printf("\nEnter Second Complex Number : ");
				scanf("%lf %lf",&b.real,&b.img);
				result = addComplex(a,b);
				viewComplex(result);
                printf("\n");
				break;
			case 2:
                printf("**Subtraction of Complex**\n");
				printf("Enter First Complex Number : ");
				scanf("%lf %lf",&a.real,&a.img);
				printf("\nEnter Second Complex Number : ");
				scanf("%lf %lf",&b.real,&b.img);
				result = subtractComplex(a,b);
				viewComplex(result);
                printf("\n");
				break;
			case 3:
                printf("**Multiplecation of Complex**\n");
				printf("Enter First Complex Number : ");
				scanf("%lf %lf",&a.real,&a.img);
				printf("\nEnter Second Complex Number : ");
				scanf("%lf %lf",&b.real,&b.img);
				result = multipleComplex(a,b);
				viewComplex(result);
                printf("\n");
				break;
			case 4:
                printf("**Divison of Complex**\n");
				printf("Enter First Complex Number : ");
				scanf("%lf %lf",&a.real,&a.img);
				printf("\nEnter Second Complex Number : ");
				scanf("%lf %lf",&b.real,&b.img);
				result = divisonComplex(a,b);
				viewComplex(result);
                printf("\n");
				break;
			case 5:
				break;
			default:
				printf("Wrong Input. please try again...\n");

		}
	}while(option!=5);
	return 0;
}



//Addition of two Complex Number
Complex addComplex(Complex a , Complex b) {
	Complex c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

//Subtraction of two Complex Number
Complex subtractComplex(Complex a , Complex b) {
	Complex c;
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	return c;
}
/*
 * if M = a+ib and N = x+iy are two complex numbers, then 
 * MxN = (ax-by) + i(ay+xb) 
*/


//Multiplecaton Funtion
Complex multipleComplex(Complex a, Complex b) {
    Complex c;
    c.real = ((a.real * b.real)-(a.img * b.img));
    c.img = ((a.real * b.img) + (b.real * a.img));
    return c;
}

/*
 * if M = a+ib and N = x+iy are two complex numbers, then  
 * M/N = ((ax+by)/(x^2+y^2)) + i((bx-ay)/(x^2+y^2))
*/

//Divison Function
Complex divisonComplex(Complex a , Complex b) {
    Complex c;
    c.real = (((a.real*b.real)+(a.img*b.img))/((b.real*b.real)+(b.img*b.img)));
    c.img = (((a.img*b.real)-(a.real*b.img))/((b.real*b.real)+(b.img*b.img)));
    return c;
}

//Displays a Complex Number
void viewComplex(Complex cn) {
    printf("\n*********Result*********\n");
	printf("\nComplex [%.2lf %+.2lfi]\n",cn.real,cn.img);
    printf("\n*************************\n");
}
