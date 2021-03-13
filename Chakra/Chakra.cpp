// Chakra.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include <filesystem>
#include "Chakra.h"

void fixupLibDir() {
	WCHAR* buffer = new WCHAR[8192];
	auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
	std::wstring PATH{ buffer, sz };
	sz = GetCurrentDirectoryW(8192, buffer);
	std::wstring CWD{ buffer, sz };
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
				std::cout << "[Chakra] Plugin " << canonical(i.path()) << " loaded\n";
				libs.push_back({ std::wstring{ i.path().c_str() }, lib });
			}
			else {
				std::cout << "[Chakra] Error when loading " << i.path() << "\n";
			}
		}
	}
}

#pragma comment(linker, "/export:HookFunction=LiteLoader.HookFunction")
#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")