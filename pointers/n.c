#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate 3 bytes of memory
    int *ptr = malloc(3);
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Store the integer value 5
	int value = 2147483647;
	ptr[0] = value; // This is incorrect and unsafe
    
    // Print the value stored
    printf("Stored value: %d\n", *(ptr));
    
    // Free the allocated memory
    free(ptr);
    
    return 0;
}
