// Chakra.cpp : 定义 DLL 的导出函数。
//
#include "pch.h"

#define MAX_PATH_LENGTH 8192

using std::endl;
using std::wcerr;
using std::wcout;
using namespace std::filesystem;

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

bool loadLib(LPCTSTR libName, bool showFailInfo = true) {
	if (LoadLibrary(libName)) {
		wcout << "[Chakra] " << libName << " Injected." << endl;
		return true;
	} else {
		if (showFailInfo) {
			DWORD error_message_id = GetLastError();
			wcerr << "[Chakra Error] Can't load " << libName << "!" << endl;
			wcerr << "[Chakra Error] Error Code:" << error_message_id << endl;
			LPWSTR message_buffer = nullptr;
			FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS |
							  FORMAT_MESSAGE_FROM_SYSTEM,
						  NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT),
						  (LPWSTR)&message_buffer, 0, NULL);
			wcerr << "[Chakra Error] " << message_buffer;
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

void loadDlls() {
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

#pragma comment(linker, "/export:HookFunction=LiteLoader.HookFunction")
#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")