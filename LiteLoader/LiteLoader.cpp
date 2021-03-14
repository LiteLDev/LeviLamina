#include "pch.h"

using std::vector;
Logger<stdio_commit> LOG(stdio_commit{ "[LL] " });

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


static void pluginsLibDir() {
	WCHAR* buffer = new WCHAR[8192];
	auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
	std::wstring PATH{ buffer, sz };
	sz = GetCurrentDirectoryW(8192, buffer);
	std::wstring CWD{ buffer, sz };
	SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
	delete[] buffer;
}


static void loadPlugins() {
	static std::vector<std::pair<std::wstring, HMODULE>> libs;
	pluginsLibDir();
	std::filesystem::directory_iterator ent("plugins");
	short plugins = 0;
	LOG("Loading plugins");
	for (auto& i : ent) {
		if (i.is_regular_file() && i.path().extension() == ".dll") {
			auto lib = LoadLibrary(i.path().c_str());
			if (lib) {
				plugins++;
				LOG("Plugin " + canonical(i.path()).filename().u8string() + " loaded");
				libs.push_back({ std::wstring{ i.path().c_str() }, lib });
			}
			else {
				LOG("Error when loading " + i.path().filename().u8string() + "");
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
				std::wcerr << "[Error] plugin " << name << " throws an exception when onPostInit\n";
				exit(1);
			}
		}
	}
	libs.clear();
	LOG(std::to_string(plugins) + " plugin(s) loaded");
}


vector<function<void(PostInitEV)>> PostInitCallBacks;
LIAPI void Event::addEventListener(function<void(PostInitEV)> callback) {
	PostInitCallBacks.push_back(callback);
}

void FixUpCWD() {
	string buf;
	buf.assign(8192, '\0');
	GetModuleFileNameA(nullptr, buf.data(), 8192);
	buf = buf.substr(0, buf.find_last_of('\\'));
	SetCurrentDirectoryA(buf.c_str());
}

void startWBThread();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp);
void updateCheck();

static void entry(bool fixcwd) {
	if (fixcwd)
		FixUpCWD();
	std::filesystem::create_directory("logs");
	Event::addEventListener([](RegCmdEV ev) {
		CMDREG::SetCommandRegistry(ev.CMDRg);
		MakeCommand("version", "Gets the version of this server", 0);
		CmdOverload(version, versionCommand);
		});

	loadPlugins();
	XIDREG::initAll();
	Event::addEventListener([](ServerStartedEV) {
		startWBThread();
		LOG("LiteLoader is distributed under the GPLv3 License");
		#ifdef LiteLoaderVersionGithub
		LOG("Version: " + (std::string)LiteLoaderVersionGithub + " Based on BedrockX Project");
		#else
		LOG("Version: " + (std::string)LiteLoaderVersion + " Based on BedrockX Project");
		#endif
		LOG("Github: https://git.io/JtwPb");
		updateCheck();
		});
	PostInitEV PostInitEV;
	for (size_t count = 0; count < PostInitCallBacks.size(); count++) {
		PostInitCallBacks[count](PostInitEV);
	}
}

THook(int, "main", int a, void* b) {
	std::ios::sync_with_stdio(false);
	//system("chcp 65001");
	entry(a > 1);
	return original(a, b);
}