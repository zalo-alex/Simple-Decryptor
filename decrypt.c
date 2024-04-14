#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("[#] Simple Decryptor by zalo-alex\n");
    printf("[#] Made for the 'Simple Encryptor' challenge on HackTheBox.com\n");
    printf("[#] Zalo Alex 2024 (c)\n");
    printf("[ ]\n");

    int iVar1;
    FILE *flag_file;
    unsigned int seed;
    unsigned int local_3c;
    size_t file_size;
    size_t flag_size;

    flag_file = fopen("flag.enc", "rb"); 

    if (!flag_file) {
        printf("[!] Please add the file 'flag.enc' in the current directory.");
        return 1;
    }

    fseek(flag_file, 0, SEEK_END);

    file_size = ftell(flag_file);
    fseek(flag_file, 0, SEEK_SET);

    fread(&seed, 4, 1, flag_file);

    flag_size = file_size - 4;

    srand(seed);

    printf("[+] Flag: ");

    for (int i = 0; i < flag_size; i++) {
        unsigned char flag_byte;
        fread(&flag_byte, 1, 1, flag_file);

        iVar1 = rand();

        local_3c = rand();
        local_3c = local_3c & 7;

        flag_byte = flag_byte >> local_3c | flag_byte << 8 - local_3c;

        flag_byte = flag_byte ^ (char) iVar1;

        printf("%c", flag_byte);
    }

    fclose(flag_file);
}