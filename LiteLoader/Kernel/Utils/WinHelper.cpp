#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Windows.h>
#include <cstdio>
#include <fstream>
#include <string>
using namespace std;

string GetLastErrorMessage() {
    DWORD error_message_id = ::GetLastError();
    if (error_message_id == 0)
        return "";

    LPWSTR message_buffer = nullptr;
    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
                  NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR)&message_buffer, 0, NULL);
    string res = wstr2str(wstring(message_buffer));
    LocalFree(message_buffer);
    return res;
}