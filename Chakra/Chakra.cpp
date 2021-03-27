// Chakra.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "Chakra.h"

#define MAX_PATH_LENGTH 8192

void fixupLibDir() {
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

void preload() {
	static std::vector<std::pair<std::wstring, HMODULE>> libs;
	std::filesystem::create_directory("plugins");
	std::filesystem::create_directory("plugins\\preload");
	std::filesystem::directory_iterator ent("plugins\\preload");
	for (auto& i : ent) {
		if (i.is_regular_file() && i.path().extension() == ".dll") {
			auto lib = LoadLibrary(i.path().c_str());
			if (lib) {
				std::cout << "[LiteLoaderChakra] Plugin " << canonical(i.path().filename()) << " loaded\n";
				libs.push_back({ std::wstring{ i.path().c_str() }, lib });
			}
			else {
				std::cout << "[LiteLoaderChakra] Error when loading " << i.path().filename() << "\n";
			}
		}
	}
}

bool LoadLib(LPCTSTR libName, bool showFailInfo = true)
{
	if (LoadLibrary(libName))
	{
		std::wcout << "[Chakra] " << libName << " Injected." << std::endl;
		return true;
	}
	else
	{
		if (showFailInfo)
		{
			std::wcout << "[Chakra][Error] Can't load " << libName << "!" << std::endl;
			std::wcout << "[Chakra][Error] Error Code:" << GetLastError() << std::endl;
		}
		return false;
	}
}

void loadDlls()
{
	std::wifstream dllList(TEXT("plugins\\DllsToLoad.conf"));
	if (!dllList)
	{
		if (!LoadLib(TEXT("LiteLoader.dll")))
			exit(GetLastError());
	}
	else
	{
		std::wstring dllName;
		while (getline(dllList,dllName))
		{
			if (!LoadLib(dllName.c_str()))
				exit(GetLastError());
		}
	}
}

#pragma comment(linker, "/export:HookFunction=LiteLoader.HookFunction")
#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")