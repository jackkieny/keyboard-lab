/*
 * STUDENT: Jack Kieny
 */

/*
 * KeyboardLab (c) 2021 Christopher A. Bohn
 */

/******************************************************************************
 * This code will output the equivalent of the following three lines of code
 * but will be accomplished without using the W key or the backslash key.
 *
 * printf("TO\tArchie\n");
 * printf("RE\tI Need a Working Keyboard\n\n");
 * printf("Please order a new keyboard for me. This one is broken.\n");
 ******************************************************************************/

#include <stdio.h>

int main() {
    char uppercase_double_u = 0x57;
    char loercase_double_u = 0x77;
    char tab = 0x9;
    char next_line =0xA;

    printf("%s%c%s%c", "TO", tab, "Archie", next_line);
    printf("%s%c%s%c%s%c%c", "RE", tab, "I Need a ", uppercase_double_u, "orking Keyboard", next_line, next_line);
    printf("%s%c%s%c", "Please order a ne", loercase_double_u, " keyboard for me. This one is broken.", next_line);
    return 0;
}
