//Implement a C function called ex4 such that it achieves 
//the same functionality as the machine code of objs/ex4_sol.o
//Note: you need to figure out ex4()'s function signature yourself; 
//the signature is not void ex4()
  
#include <assert.h>

<<<<<<< HEAD
int
ex4(int a) {
	//fabonacci recurrence
	int total = 0;
	if (a <= 1){
		return a;
	}
	else {
		total += (ex4(a-1));
		total += (ex4(a-2));
	}
	return total;
=======
void
ex4() {
	assert(0);
>>>>>>> bfe3ded3ff5eae408032932f0767b928f0504d7c
}
