#include <cstdio>

#define LOWER_SIZE 6    
#define UPPER_SIZE 6    


char read_from_array(char* array, int index, int size) {
    if (index >= 0 && index < size) {
        return array[index];
    } else {
        printf("Error: Index %d out of bounds. Cannot read.\n", index);
        return '\0';  
    }
}


void write_to_array(char* array, int index, int size, char value) {
    if (index >= 0 && index < size) {
        array[index] = value;
        printf("Successfully wrote '%c' at index %d.\n", value, index);
    } else {
        printf("Error: Index %d out of bounds. Cannot write '%c'.\n", index, value);
    }
}

int main() {
    char lower[] = "abc?e"; 
    char upper[] = "ABC?E";  


    lower[3] = 'd';  
    printf("Lower array after change: %s\n", lower);

   
    printf("\nModifying the upper array...\n");
    write_to_array(upper, 3, UPPER_SIZE, 'D'); 
    printf("Upper array after modification: %s\n", upper);

    printf("\nReading from arrays...\n");
    char lower_char = read_from_array(lower, 3, LOWER_SIZE); 
    char upper_char = read_from_array(upper, 3, UPPER_SIZE);  

   
    printf("Read from lower array: '%c'\n", lower_char);
    printf("Read from upper array: '%c'\n", upper_char);

    return 0;
}
