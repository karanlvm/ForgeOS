#include "types.h"


void printf(char* str)
{
    static uint16_t* VideoMemory = (uint16_t*)0xb8000;

    for(int i = 0; str[i] != '\0'; ++i)
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}

extern "C" void kernelMain(void* multiboot_structure, uint32_t magicnumber)
{
    
    printf("Hello, World! ---------- http://www.karanlvm.github.io/portfolio ");

    while(1); // Beacuse it does not make sense if the kernel just stops :)
}