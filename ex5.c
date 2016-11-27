//Implement a C function called ex5 such that it achieves 
//the same functionality as the machine code of objs/ex5_sol.o
//Note: you need to figure out ex5()'s function signature yourself; 
//the signature is not void ex5(node *n). However, as a hint, 
//ex5 does take node * as an argument.
 
#include <assert.h>
#include "ex5.h"

<<<<<<< HEAD
int
ex5(node *n) {
	if (n != '\0'){  //check if array is null
		while(n->next != '\0'){ //check if the next element is null
			if (n->value <= n->next->value){
				n = n->next;
			}
			else{
				return 0;
			}
		}
		return 1;
	}
	else{	
		return 1;
	}
=======
void
ex5(node *n) {
	assert(0);
>>>>>>> bfe3ded3ff5eae408032932f0767b928f0504d7c
}
