#include "pch.h"
#include <filesystem>
#include "framework.h"

static void PrintErrorMessage() {
	DWORD errorMessageID = ::GetLastError();
	if (errorMessageID == 0) {
		std::wcerr << "Error\n";
		return;
	}
	std::cerr << "[Error] ErrorMessageID: " << errorMessageID << std::endl;
	LPWSTR messageBuffer = nullptr;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM, NULL, errorMessageID,
		MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR)&messageBuffer, 0, NULL);
	std::wcerr << "[Error] " << messageBuffer;
	LocalFree(messageBuffer);
}

const char* info =
"[LiteLoader] %d plugin(s) loaded, LiteLoader Version: %s, Based on BedrockX\n"
"Github: https://github.com/LiteLDev/LiteLoader\n";

static void loadPlugins() {
	static std::vector<std::pair<std::wstring, HMODULE>> libs;
	std::filesystem::create_directory("plugins");
	std::filesystem::directory_iterator ent("plugins");
	std::cout << "[LiteLoader] Loading plugins\n";
	short plugins = 0;
	for (auto& i : ent) {
		if (i.is_regular_file() && i.path().extension() == ".dll") {
			auto lib = LoadLibrary(i.path().c_str());
			if (lib) {
				plugins++;
				std::cout << "[LiteLoader] Plugin " << canonical(i.path()) << " loaded\n";
				libs.push_back({ std::wstring{ i.path().c_str() }, lib });
			}
			else {
				std::cout << "[LiteLoader] Error when loading " << i.path() << "\n";
				PrintErrorMessage();
			}
		}
	}
	for (auto& [name, h] : libs) {
		auto FN = GetProcAddress(h, "onPostInit");
		if (!FN) {
			//std::wcerr << "Warning!!! mod" << name << " doesnt have a onPostInit\n";
		}
		else {
			try {
				((void (*)()) FN)();
			}
			catch (...) {
				std::wcerr << "[Error] mod" << name << " throws an exception when onPostInit\n";
				exit(1);
			}
		}
	}
	libs.clear();
	printf(info, plugins, getVersion);
}

static void entry(bool fixcwd) {
	loadPlugins();
}

THook(int, "main", int a, void* b) {
	std::ios::sync_with_stdio(false);
	//system("chcp 65001");
	entry(a > 1);
	return original(a, b);
}
