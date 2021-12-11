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

//Tool
wchar_t* str2cwstr(string str)
{
	auto len = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
	wchar_t* buffer = new wchar_t[len + 1];
	MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buffer, len + 1);
	buffer[len] = L'\0';
	return buffer;
}

#define READ_BUFFER_SIZE 4096

bool NewProcess(const std::string& process, std::function<void(int, std::string)> callback, int timeLimit)
{
	SECURITY_ATTRIBUTES sa;
	HANDLE hRead, hWrite;
	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;

	if (!CreatePipe(&hRead, &hWrite, &sa, 0))
		return false;
	STARTUPINFOW si = { 0 };
	PROCESS_INFORMATION pi;

	si.cb = sizeof(STARTUPINFO);
	GetStartupInfoW(&si);
	si.hStdOutput = si.hStdError = hWrite;
	si.dwFlags = STARTF_USESTDHANDLES;

	auto wCmd = str2cwstr(process);
	if (!CreateProcessW(NULL, wCmd, NULL, NULL, TRUE, NULL, NULL, NULL, &si, &pi))
	{
		delete[] wCmd;
		return false;
	}
	CloseHandle(hWrite);
	CloseHandle(pi.hThread);

	std::thread([hRead{ std::move(hRead) }, hProcess{ std::move(pi.hProcess) },
		callback{ std::move(callback) }, timeLimit{ std::move(timeLimit) }, wCmd{ std::move(wCmd) }]()
	{
		if (timeLimit == -1)
			WaitForSingleObject(hProcess, INFINITE);
		else
		{
			WaitForSingleObject(hProcess, timeLimit);
			TerminateProcess(hProcess, -1);
		}
		char buffer[READ_BUFFER_SIZE];
		string strOutput;
		DWORD bytesRead, exitCode;

		delete[] wCmd;
		GetExitCodeProcess(hProcess, &exitCode);
		while (true)
		{
			ZeroMemory(buffer, READ_BUFFER_SIZE);
			if (!ReadFile(hRead, buffer, READ_BUFFER_SIZE, &bytesRead, NULL))
				break;
			strOutput.append(buffer, bytesRead);
		}
		CloseHandle(hRead);
		CloseHandle(hProcess);

		callback((int)exitCode, strOutput);
	}).detach();

	return true;
}