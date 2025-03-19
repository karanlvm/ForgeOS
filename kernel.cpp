
void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb8000;

    for(int i = 0; str[i] != '\0'; ++i)
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    
    printf("Hello, World! ---------- http://www.karanlvm.github.io/portfolio ");

    while(1); // Beacuse it does not make sense if the kernel just stops :)
}