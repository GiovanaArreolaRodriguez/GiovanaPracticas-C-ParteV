#include <stdio.h>
int i[10], x;
float f[10];
int main(){
	printf("\t\tEntero \t\t Flotante\n");
	for(x=0;x<10;x++){
		printf("Elemento %d:\t %d \t\t %d \n", x, &i[x], &f[x]);
	}
	
	system("Pause");
	return 0;
}
