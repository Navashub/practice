#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *result;
	result = fopen("peter.txt", "w");
	fprintf(result, "%s", "Hello world");
	fclose(result);
	return 0;
}
