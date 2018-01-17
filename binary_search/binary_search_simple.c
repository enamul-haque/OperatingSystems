#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1000 // maximum array size

void binary_search(double store[], double term, int N){

	int first, last, middle;
	first = 0;
	last = N-1;
	middle = floor(first+last)/2;
	int counter = 0;

	while (first <= last){
		counter += 1;
		if (store[middle]==term){
			printf("Found at step: %d\n", counter);
			break;
		}
		else if (store[middle] < term){
			first = middle + 1;
		}
		else{
			last = middle - 1;
		}

		middle = floor(first+last)/2;
	}

	if (first > last){
		printf("%lf is not found in the list\n", term);
	}

	return;
}



int main(void){

double store[MAX_SIZE] = {};
int n;
printf("Please input number of elements in the array: ");
scanf(" %d", &n);

printf("Now enter %d numbers: ", n);
for (int i=0; i<n; i++){
    scanf("%lf", &store[i]);
    }

printf("The input values are: \n");
for (int j=0; j<n; j++){
	printf("%lf ", store[j]);
}
printf("\n");

double term;
printf("Search term: ");
scanf("%lf", &term);
binary_search(store, term, n);

printf("End of program\n");

return 0;
}



