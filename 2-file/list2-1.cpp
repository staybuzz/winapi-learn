#include <windows.h>
#include <stdio.h>

void main() {
    //char filename[MAX_PATH];
    char c;
    FILE *f;

    // �t�@�C�������擾����
    //printf("�t�@�C��������͂��Ă��������F");
    //scanf_s("%s", filename, MAX_PATH);
    char *filename = "C:\\Windows\\System32\\drivers\\etc\\hosts";

    // �t�@�C�����J��
    f = fopen(filename, "r");
    if (f) {
        // eof�܂œǂݎ��
        while ((c = fgetc(f)) != EOF)
            printf("%c", c);
    }

    // �t�@�C�������
    fclose(f);
}