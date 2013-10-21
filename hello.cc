#include <iostream>
#include "List.h"
typedef union {
	long i;
	int k[5];
	char c;
} DATE;
struct data {
	int cat;
	DATE cow;
	double dog;
} too;
DATE max;
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;	
}
int main()
{
#ifdef SET_A
	//for(int i ; i < 10;i++)
	//{
		//tList * head=(tList *)malloc(sizeof(tList));
		//head->content= i;

	//}
	//int a, b, c, d;
	//a = 10;
	//10
	//b = a++;
	//12
	//c = ++a;
	//120	
	//d = 10 * (a++);
	//13
	//std::cout << a << "\n";
	//std::cout << b << "\n";
	//std::cout << c << "\n";
	//std::cout << d << "\n";
	//std::cout << "Hello, world!\n";
	std::cout << sizeof(int) << "\n";
	std::cout << sizeof(long) << "\n";
	std::cout << sizeof(double) << "\n";
	std::cout << sizeof(struct data) << "\n";
	int a = 10;
	int b = 20;
	swap(&a, &b);
	std::cout << "a=" << a << "\n" << "b=" << b << "\n";
	std::cout << sizeof(struct data) + sizeof(max) << "\n";
#endif
	unsigned int a = 6;
	int b = -12;
	if (a + b > 0) {
		std::cout << a + b << "\n";
	}
	return 0;
}
