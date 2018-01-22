using namespace std;

#include <windows.h>
#include <iostream>

void main() {
    HANDLE fileHandle;
    BOOL success;
    char s[10];
    DWORD numRead;
    char filename[1000];

    // ファイル名を取得する
    // cout << "ファイル名を入力してください：";
    // cin >> filename;
    strcpy(filename, "c:\\windows\\system32\\drivers\\etc\\hosts");

    // ファイルを開く
    fileHandle = CreateFile(filename, GENERIC_READ,
        0, 0, OPEN_EXISTING, 0, 0);
    if (fileHandle == INVALID_HANDLE_VALUE) {
        cout << "ファイルを開くときに、エラー番号 " << GetLastError()
            << " が発生しました。" << endl;
        return;
    }

    // eofまでファイルを読み取って、標準出力に書き出す。
    do {
        success = ReadFile(fileHandle, s, 1,
            &numRead, 0);
        s[numRead] = 0;
        cout << s;
    } while (numRead > 0 && success);

    // ファイルを閉じる
    CloseHandle(fileHandle);
}