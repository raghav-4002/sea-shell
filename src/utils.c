#include "../include/utils.h"
#include <stddef.h>


/*
 * This function frees the memory allocated to elements of an array
   and the array itself.
*/
void
free_array_of_arrays(char **array, size_t array_size)
{
    /* free individual element */
    for(size_t i = 0; i < array_size; i++) {
        free(array[i]);
    }

    /* free the array */
    free(array);
    array = NULL;
}