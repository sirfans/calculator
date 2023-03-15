#include <stdio.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "sqre.h"
void main(){
	int a=10,b=5;
	sum(a,b);
	printf("\n");
	sub(a,b);
	printf("\n");
	mul(a,b);
	printf("\n");
	div(a,b);
	printf("\n");
	sqre(a);
}

