#include <iostream>
#include "List.h"
int 
main()
{
for(int i ; i < 10;i++)
{
	tList * head=(tList *)malloc(sizeof(tList));
	head->content= i;

}
std::cout << "Hello, world!\n";
return 0;
}
