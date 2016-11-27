//Implement a C function called ex2 such that it achieves 
//the same functionality as the machine code of objs/ex2_sol.o
//Note: you need to figure out ex2()'s function signature yourself; 
//the signature is not void ex2()
  
#include <assert.h>

<<<<<<< HEAD
int
ex2(char *a) {
	int count = 0; //(%eax))
	char test = *a; //%rcx
	while (test != '\0'){
		if(test == 'a'){	
			count++;
		}
		a++;
		test = *a;
	}
	return count;
=======
void
ex2() {
	assert(0);
>>>>>>> bfe3ded3ff5eae408032932f0767b928f0504d7c
}
