using namespace std;

#include <windows.h>
#include <iostream>

void main() {
    HANDLE fileHandle;
    BOOL success;
    char s[10];
    DWORD numRead;
    char filename[1000];

    // �t�@�C�������擾����
    // cout << "�t�@�C��������͂��Ă��������F";
    // cin >> filename;
    strcpy(filename, "c:\\windows\\system32\\drivers\\etc\\hosts");

    // �t�@�C�����J��
    fileHandle = CreateFile(filename, GENERIC_READ,
        0, 0, OPEN_EXISTING, 0, 0);
    if (fileHandle == INVALID_HANDLE_VALUE) {
        cout << "�t�@�C�����J���Ƃ��ɁA�G���[�ԍ� " << GetLastError()
            << " ���������܂����B" << endl;
        return;
    }

    // eof�܂Ńt�@�C����ǂݎ���āA�W���o�͂ɏ����o���B
    do {
        success = ReadFile(fileHandle, s, 1,
            &numRead, 0);
        s[numRead] = 0;
        cout << s;
    } while (numRead > 0 && success);

    // �t�@�C�������
    CloseHandle(fileHandle);
}