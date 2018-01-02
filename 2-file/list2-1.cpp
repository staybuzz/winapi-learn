#include <windows.h>
#include <stdio.h>

void main() {
    //char filename[MAX_PATH];
    char c;
    FILE *f;

    // ファイル名を取得する
    //printf("ファイル名を入力してください：");
    //scanf_s("%s", filename, MAX_PATH);
    char *filename = "C:\\Windows\\System32\\drivers\\etc\\hosts";

    // ファイルを開く
    f = fopen(filename, "r");
    if (f) {
        // eofまで読み取る
        while ((c = fgetc(f)) != EOF)
            printf("%c", c);
    }

    // ファイルを閉じる
    fclose(f);
}