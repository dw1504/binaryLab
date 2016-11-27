//Implement a C function called ex3 such that it achieves 
//the same functionality as the machine code of objs/ex3_sol.o
//Note: you need to figure out ex3()'s function signature yourself; 
//the signature is not void ex3()
  
#include <assert.h>
<<<<<<< HEAD
int
ex3(char *array, char *array1, int numberOfSwap) {
	int count = 0;
	while(count < numberOfSwap){  //swap two elements
		char temp = array[count];
		char temp1 = array1[count];
		array[count] = temp1;
		array1[count] = temp;
		count++;
	}
	return count;
=======

void
ex3() {
	assert(0);
>>>>>>> bfe3ded3ff5eae408032932f0767b928f0504d7c
}
