﻿#include "pch.h"
#include "Logger.h"
#include <string>

using std::string;
using std::wstring;
using namespace std::filesystem;


#define MAX_PATH_LENGTH 8192

void fixUpLibDir() {
	WCHAR* buffer = new (std::nothrow) WCHAR[MAX_PATH_LENGTH];
	if (!buffer)
		return;

	DWORD length = GetEnvironmentVariableW(TEXT("PATH"), buffer, MAX_PATH_LENGTH);
	std::wstring PATH(buffer, length);
	length = GetCurrentDirectoryW(MAX_PATH_LENGTH, buffer);
	std::wstring CWD(buffer, length);

	SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins\\lib;" + PATH).c_str());
	delete[] buffer;
}

string wstr2str(wstring wstr) {
	auto  len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
	char* buffer = new char[len + 1];
	WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, NULL, NULL);
	buffer[len] = '\0';

	string result = string(buffer);
	delete[] buffer;
	return result;
}

bool loadLib(LPCTSTR libName, bool showFailInfo = true) {
	if (LoadLibrary(libName)) {
        Info("{} Injected.", std::filesystem::path(wstr2str(libName)).filename().u8string());
		return true;
	} else {
		if (showFailInfo) {
			DWORD error_message_id = GetLastError();
			Error("Can't load {} !", wstr2str(libName));
			Error("Error code: {} !", error_message_id);
			LPWSTR message_buffer = nullptr;
			FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS |
							  FORMAT_MESSAGE_FROM_SYSTEM,
						  NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT),
						  (LPWSTR)&message_buffer, 0, NULL);
			Error("{}", wstr2str(message_buffer));
			LocalFree(message_buffer);
		}
		return false;
	}
}

void loadCsr() {
	if (exists(path(TEXT("./plugins/BDSNetRunner.dll")))) {
		loadLib(TEXT("./plugins/BDSNetRunner.dll"));
	}
}

bool loadLiteLoader() {
	if (!exists(path(TEXT("LiteLoader.dll"))))
		return false;
	if (!loadLib(TEXT("LiteLoader.dll")))
		return false;
	return true;
}

void loadCsrs() {
    if (exists(path(TEXT("./plugins/CustomConsoleOutput.dll")))) {
        loadLib(TEXT("./plugins/CustomConsoleOutput.dll"));
    }
}

void loadDlls() {
    loadCsrs();
	if (!loadLiteLoader()) {
		Sleep(3000);
		exit(GetLastError());
	}
	loadCsr();

	if (exists(path(TEXT(".\\plugins\\preload.conf")))) {
		std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
		if (dllList) {
			std::wstring dllName;
			while (getline(dllList, dllName)) {
				if (dllName.back() == TEXT('\n'))
					dllName.pop_back();
				if (dllName.back() == TEXT('\r'))
					dllName.pop_back();

				if (dllName.empty() || dllName.front() == TEXT('#'))
					continue;
				if (dllName.find(L"LiteLoader.dll") != std::wstring::npos ||
					dllName.find(L"BDSNetRunner.dll") != std::wstring::npos)
					continue;
				loadLib(dllName.c_str());
			}
			dllList.close();
		}
	} else {
		std::wofstream dllList(TEXT(".\\plugins\\preload.conf"));
		dllList.close();
	}
}

//#pragma comment(linker, "/export:HookFunction=LiteLoader.HookFunction")
//#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")