#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
* Problem homemade
* luhn algorithm

IN :
  string : credit card number;
OUT : 
	string "VALID" if the number is valid, "INVALID" otherwise
*/


int main() {
    
    uint8_t* arr = (uint8_t*)malloc(16 * sizeof(uint8_t));

    if (arr == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

	char buffer[17]; // 16 digits + null terminator
    if (scanf_s("%16s", buffer, (unsigned)_countof(buffer)) != 1) {
        printf("Erreur de lecture du numéro de carte\n");
        free(arr);
        return 1;
    }

    int len = (int)strlen(buffer);
    if(len != 16) {
        printf("INVALID : le numéro de carte doit contenir exactement 16 chiffres\n");
        free(arr);
        return 0;
	}

	memcpy(arr, buffer, 16 * sizeof(uint8_t));
    for(int i=0; i<16; i++) printf("%d : %c\n", i, *(arr+i));
    free(arr);
    return 0;
}
    
