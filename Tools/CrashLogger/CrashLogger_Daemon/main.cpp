#include <windows.h>
#include <cstdio>
#include <string>
#include "../include/LoggerShareData.h"
#include <iostream>

using namespace std;

extern void DebuggerMain(HANDLE hPro);
extern wstring bdsVersion;

int main(int argc,char **argv)
{
	if (argc <= 1)
	{
		printf("[CrashLogger] Don't execute this process independently.\n"
			"[CrashLogger] You should pass a PID as a command line argument which is of the process to be daemoned.\n");
		MessageBox(NULL, L"Don't execute this process independently.\r\nYou should pass a PID as a command line argument which is of the process to be daemoned.",L"Error",MB_OK);
		return 1;
	}

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, stoul(argv[1]));
	if (hProcess == NULL)
	{
		printf("[CrashLogger][ERROR] Fail to Open the process to be daemoned! Error Code: %d\n", GetLastError());
		return -1;
	}

	if (3 <= argc) {
        wchar_t buf[20] = {0};
        wsprintf(buf, L"%S", argv[2]);
        bdsVersion = buf;
        if (bdsVersion[0] == L'v')
            bdsVersion = bdsVersion.substr(1);
	}

    //printf("[CrashLogger] CrashLogger Daemon Process attached.\n");
	DebuggerMain(hProcess);
	return 0;
}