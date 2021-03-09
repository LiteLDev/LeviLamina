#include "pch.h"
#include <filesystem>
#include "framework.h"
#include <api\xuidreg\xuidreg.h>
#include <lbpch.h>
#include <httplib.h>
#include <rapidjson\rapidjson.h>
#include <rapidjson/document.h>
#include "logger.h"
using std::vector;

Logger<stdio_commit> LOG(stdio_commit{ "[LiteLoader] " });

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
"[LiteLoader] %d plugin(s) loaded\n"
"[LiteLoader] Version: %s Based on BedrockX Project\n"
"[LiteLoader] Github: https://git.io/JtwPb\n";
static void fixupLIBDIR() {
	WCHAR* buffer = new WCHAR[8192];
	auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
	std::wstring PATH{ buffer, sz };
	sz = GetCurrentDirectoryW(8192, buffer);
	std::wstring CWD{ buffer, sz };
	SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
	delete[] buffer;
}
static void plginsLIBD() {
	WCHAR* buffer = new WCHAR[8192];
	auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
	std::wstring PATH{ buffer, sz };
	sz = GetCurrentDirectoryW(8192, buffer);
	std::wstring CWD{ buffer, sz };
	SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins\\lib;" + PATH).c_str());
	delete[] buffer;
}
static void loadPlugins() {
	static std::vector<std::pair<std::wstring, HMODULE>> libs;
	fixupLIBDIR();
	plginsLIBD();
	std::filesystem::directory_iterator ent("plugins");
	std::cout << "[LiteLoader] Loading plugins\n";
	short plugins = 0;
	for (auto& i : ent) {
		if (i.is_regular_file() && i.path().extension() == ".dll") {
			auto lib = LoadLibrary(i.path().c_str());
			if (lib) {
				plugins++;
				std::cout << "[LiteLoader] Plugin " << canonical(i.path()).u8string() << " loaded\n";
				libs.push_back({ std::wstring{ i.path().c_str() }, lib });
			}
			else {
				std::cout << "[LiteLoader] Error when loading " << i.path().u8string() << "\n";
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
#ifdef LiteLoaderVersionGithub
	printf(info, plugins, LiteLoaderVersionGithub);
#else
	printf(info, plugins, LiteLoaderVersion);
#endif
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

void updateCheck() {
	std::thread t([] {
	httplib::Client cli("http://u.sakuralo.top:43199");
	auto res = cli.Get("/version");
	cli.set_connection_timeout(0, 300000);
	rapidjson::Document json;
	if (res) {
		json.Parse(res->body.c_str());
		if (json.HasParseError()) {
			cout << u8"[BDSLiteloader]Զ��json��ʽ���������ϵ����" <<endl;
			return;
		}
		auto arr = json.GetArray();
		string Latest_release = arr[arr.Size() - 1]["name"].GetString();
		auto Latest_message = arr[arr.Size() - 1]["message"].GetString();
		if (Latest_release != LiteLoaderVersion) {
				cout<< u8"[BDSLiteloader]������ʹ�þɰ�"<< LiteLoaderVersion <<u8"���°�"<< Latest_release<<u8"�ѷ���"
					<< u8"\n[BDSLiteloader]������־��" << Latest_message<<u8"���������ӣ�https://github.com/LiteLDev/LiteLoader"<< endl;
		}
		if (Latest_release == LiteLoaderVersion) {
			cout << u8"[BDSLiteloader]������ʹ�����°�" << LiteLoaderVersion  << endl;
		}
	}
	else
	{
		cout << u8"[BDSLiteloader]��ȡ����ʧ�ܣ�������������Զ�̷��������ַ����ϰ�"
		   << u8"\n[BDSLiteloader]Failed to get update " << endl;
	}
		});
	t.detach();
}

static void entry(bool fixcwd) {
	if (fixcwd)
		FixUpCWD();
	loadPlugins();
	XIDREG::initAll();
	Event::addEventListener([](ServerStartedEV) {
		startWBThread();
		updateCheck();
		});
	Event::addEventListener([](RegCmdEV ev) {
		CMDREG::SetCommandRegistry(ev.CMDRg);
		MakeCommand("version", "Gets the version of this server", 0);
		CmdOverload(version, versionCommand);
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

Logger2 LOG2("./ServerCrash.log");
THook(void, "?initialize@CrashHandler@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z",
	std::string const& a, std::string const& b, std::string const& c) {
	original(a, "https://rink.hockeyapp.net/api/2/apps/64afd4a74b1e437c92eb88e43b131769/crashes/upload", c);
}
THook(void, "?dumpCrashHandlerAppCrashLog@CrashHelper@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_J0V?$basic_string_span@$$CBD$0?0@gsl@@@Z",
	std::string const& a1, std::string const& a2, std::string const& a3, __time64_t a4, __int64 a5, unsigned int* a6) {
	LOG2 << "����ʱ�䣺" << gettime()
		<< "\n����ƽ̨��" << a2
		<< "\n������־��\n" << a3
		<< "\n--------------------------------------------------------------------------------------";
	return original(a1, a2, a3, a4, a5, a6);
}