#include <stdio.h>

int main() {
    int registeredNumbers[100]; 
    int numRegistered, searchNumber;
    
    printf("Enter the number of registered numbers: ");
    scanf("%d", &numRegistered);
    
    printf("Enter the registered numbers:\n");
    for (int i = 0; i < numRegistered; i++) {
        scanf("%d", &registeredNumbers[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &searchNumber);
    
    int found = 0;
    for (int i = 0; i < numRegistered; i++) {
    	 if (registeredNumbers[i] == searchNumber) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Number %d is found in the list.\n", searchNumber);
    } else {
        printf("Number %d is not found in the list.\n", searchNumber);
    }
    
    return 0;
}
