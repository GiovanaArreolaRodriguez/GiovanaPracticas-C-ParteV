#include <stdio.h>

int*p, y;
void func() {
	int x=40; 
	p=&x; 
	y=*p;     //Correcto 
	*p=23;   //Correcto
} 
int main(void) { 
	func();
	y=*p;     //Incorrecto 
	*p=25;   //Incorrecto 
	printf(" El valor de y es %d \nElvalor de *p es %d \n El valor de p es %p", y , *p, p); 
	}
