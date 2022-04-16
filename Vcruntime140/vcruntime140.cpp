#include "pch.h"
#include "Logger.h"
#include <string>

#include "vcruntime.h"

#include <Windows.h>
#include <tchar.h>

typedef size_t(RUNTIME_CALL* _CxxFrameHandler4_t)(void*, size_t, void*, void*);

static HMODULE g_hRuntime = nullptr;
static _CxxFrameHandler4_t g_CxxFrameHandler4 = nullptr;

#pragma comment(linker, "/export:__CxxFrameHandler4=_CxxFrameHandler4")
RUNTIME_EXPORT size_t RUNTIME_CALL _CxxFrameHandler4(void* pExcept, size_t RN, void* pContext, void* pDC)
{
    if (g_CxxFrameHandler4) return g_CxxFrameHandler4(pExcept, RN, pContext, pDC);
    return 1;
}

#pragma comment(linker, "/export:__NLG_Dispatch2=_NLG_Dispatch2")
RUNTIME_EXPORT void RUNTIME_CALL _NLG_Dispatch2()
{
    return;
}

#pragma comment(linker, "/export:__NLG_Return2=_NLG_Return2")
RUNTIME_EXPORT void RUNTIME_CALL _NLG_Return2()
{
    return;
}

namespace proxy
{
inline void crash()
{
    uint8_t* memory = nullptr;
    *memory = 0;
}

HMODULE getLocalVCRuntime()
{
    return LoadLibraryExW(_T(VC_RUNTIME_LOCAL_LIB), NULL, LOAD_LIBRARY_SEARCH_APPLICATION_DIR);
}

HMODULE getSystemVCRuntime()
{
    size_t len = 0;
    static wchar_t runtimePath[MAX_PATH];

    if (GetSystemDirectoryW(runtimePath, MAX_PATH - 1))
    {
        const wchar_t* runtime = _T(VC_RUNTIME_LIB);
        wchar_t* endPath = runtimePath;

        while (*endPath++) ++len;

        if (len + ARRAYSIZE(VC_RUNTIME_LIB) > MAX_PATH)
            return FALSE;

        *(--endPath)++ = '\\';
        while (*endPath++ = *runtime++)
            ;

        return LoadLibraryExW(runtimePath, NULL, LOAD_LIBRARY_SEARCH_SYSTEM32);
    }
    return nullptr;
}

void init_runtime()
{
    if (!g_hRuntime)
    {
        g_hRuntime = getLocalVCRuntime();
        if (!g_hRuntime) g_hRuntime = getSystemVCRuntime();

        if (g_hRuntime)
        {
            g_CxxFrameHandler4 = (_CxxFrameHandler4_t)GetProcAddress(g_hRuntime, "__CxxFrameHandler4");
        }
    }
    // handler required!
    if (!g_CxxFrameHandler4) crash();
}
void free_runtime()
{
    if (g_hRuntime)
    {
        FreeLibrary(g_hRuntime);
        g_CxxFrameHandler4 = nullptr;
        g_hRuntime = nullptr;
    }
}
}

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

void loadCSR() {
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

void DelLLUnifiedOutput()
{
    if (exists(path(TEXT(".\\plugins\\LiteLoader\\LLUnifiedOutput.dll"))))
    {
        remove(path(TEXT(".\\plugins\\LiteLoader\\LLUnifiedOutput.dll")));
    }
    if (exists(path(TEXT(".\\plugins\\LiteLoader\\LLUnifiedOutput.pdb"))))
    {
        remove(path(TEXT(".\\plugins\\LiteLoader\\LLUnifiedOutput.pdb")));
    }
}
void loadLLAutoUpdate()
{
    if (exists(path(TEXT(".\\plugins\\LiteLoader\\LLAutoUpdate.dll"))))
    {
        loadLib(TEXT(".\\plugins\\LiteLoader\\LLAutoUpdate.dll"));
    }
}

void loadDlls() {
    loadLLAutoUpdate();
    DelLLUnifiedOutput();
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
					dllName.find(L"BDSNetRunner.dll") != std::wstring::npos ||
					dllName.find(L"LLAutoUpdate.dll") != std::wstring::npos || 
					dllName.find(L"LXLAutoUpdate.dll") != std::wstring::npos)
					continue;
				loadLib(dllName.c_str());
			}
			dllList.close();
		}
	} else {
		std::wofstream dllList(TEXT(".\\plugins\\preload.conf"));
		dllList.close();
	}
	loadCSR();
	if (!loadLiteLoader()) {
		Sleep(3000);
		exit(GetLastError());
	}
}