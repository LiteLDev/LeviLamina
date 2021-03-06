// Chakra.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include <filesystem>
#include "Chakra.h"

void preload() {
	static std::vector<std::pair<std::wstring, HMODULE>> libs;
	std::filesystem::create_directory("plugins\\preload");
	std::filesystem::directory_iterator ent("plugins\\preload");
	std::cout << "[Chakra] Loading preload plugins\n";
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