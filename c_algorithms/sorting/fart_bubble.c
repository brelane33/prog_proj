#include <stdio.h>
#include <stdbool.h>

bool swapped;
int temp, passes;
int unsorted[9] = {5, 1, 2, 4, 3, 7, 8, 9, 6};

int main() {

    printf("unsorted: ");
    for(int i = 0; i < 9; i++) {
        printf("%d ", unsorted[i]);
    } 

    printf("\nstarting sort\n");
    for (int i = 0; i < 8; i++){
        for(int j = 0; (j < 8 - i); j++) {
            if(unsorted[j] > unsorted[j+1]) {
                printf("i: %d j: %d\n", i, j);
                passes++;
                temp = unsorted[j];
                unsorted[j] = unsorted[j+1];
	            unsorted[j+1] = temp;
	        }
        }
    }
    
    printf("sorted list: ");
    for(int i = 0; i < 9; i++) {
        printf("%d ", unsorted[i]);
    }
    printf("\n passes: %d", passes);

}

