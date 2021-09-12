/*
 * STUDENT: Jack Kieny
 */

/*
 * KeyboardLab (c) 2021 Christopher A. Bohn
 */

/******************************************************************************
 * This code will implement functions equivalent to ctype.h's isdigit() and
 * tolower() without #include'ing any files, without using any number keys
 * other than 0 and 9 (and 7, which has the & symbol), without using any switch
 * statements, and using at most one if statement in each function.
 *
 * Cannot Use:
 * 1!, 2@, 3#, 4$, 5%, 6^, 8*, S, s, W, w, \ and only one IF-STATEMENT per function
 ******************************************************************************/



/* Returns 1 if the argument is a decimal digit (such as '5'), 0 otherwise */
int is_digit(char character) {

    if(character >= '0' && character <= '9'){ //If character is between ascii values of 0-9
        return 9/9; //Returns 1
    }
    return 0;
}

/* Converts uppercase letters to lowercase letters.
 * If the argument is an uppercase letter, the function returns the
 * corresponding lowercase letter (e.g., 'D' yields 'd'). Otherwise, the
 * function returns the argument, unchanged. */
char to_lowercase(char character) {

    if(character >= 'a' && character <= 'z' || character >= '0' && character <= '9'){ //If character's ascii value is already lowercase
        return character; //return input character
    }

    return character+('a'-'A');
    /*
     * All ascii letters are equally spaced out by 'a'-'A' (32, or 'b'-'B', etc.) so returning
     * the original capital letter + 32 will give us the lower case ascii value for the corresponding letter
     */
}
