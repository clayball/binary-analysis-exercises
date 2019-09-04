#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Binary Analysis book by Dennis Andriesse
// Chapter: 1
// Exercise: Locating Functions
// - Write a C program that contains several functions and compile is into an
// assembly file, an object file, and an executable binary, respectively.
//
// -- compile an assembly file
//    gcc -S -masm=intel chapter01.c
// -- compile an object file
//    gcc -c chapter01.c
// -- compile an executable binary
//    gcc chapter01.c
//    make chapter01
//
// - Try to locate the functions in each of the various files.
// - Can you see the correspondence between the C code and the assembly code?
// - Finally, strip the executable and try to identify the functions again.
///////////////////////////////////////////////////////////////////////////////

void low_frequency() {
    printf("LF: 10-1 km\n");
}

void high_frequency() {
    printf("HF: 100-10 km");
}

void very_high_frequency() {
    printf("VHF: 10-1 m");
}

int main() {
    //
    char chapter[] = "1";

    printf("Chapter: %s\n", chapter);
    return 0;
}