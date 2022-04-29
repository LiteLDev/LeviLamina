#pragma once

#include <Nlohmann/json.hpp>
#include <string>
#include <thread>

/////////////////////// CrashLogger ///////////////////////
// When comes with these plugins, disable builtin CrashLogger since they will cause crash
constexpr const char* NoCrashLogger[] = {"BDSNetRunner", "AntiCheats"};
#define CL_PRELOG_MODULE L"plugins/LiteLoader/CrashLogger.dll"


/////////////////////// SEH Protection ///////////////////////
// Remove this to disable SEH all around LiteLoader
#define ENABLE_SEH_PROTECTION


/////////////////////// LL Configs ///////////////////////
#define LITELOADER_CONFIG_FILE "plugins/LiteLoader/LiteLoader.json"

namespace LL
{
struct CommandLineOption
{
    bool noColorOption = false;
};
enum class LLServerStatus
{
    Starting, Running, Stopping
};
struct LLConfig
{
    bool debugMode = false;
    bool colorLog = true;
    int logLevel = 4;
    std::string language = "en";

    bool enableScriptEngine = true;
    bool alwaysLaunchScriptEngine = false;

    bool enableAddonsHelper = true;
    std::string addonsInstallPath = "plugins/AddonsHelper";

    bool enableAutoUpdate = true;
    bool enableCrashLogger = true;
    std::string crashLoggerPath = "plugins\\LiteLoader\\CrashLogger_Daemon.exe";
    bool enableSimpleServerLogger = true;
    bool enableFixDisconnectBug = true;
    bool enableFixListenPort = false;
    bool enableAntiGive = true;
    bool enableUnlockCmd = true;
    bool enableErrorStackTraceback = true;
    bool cacheErrorStackTracebackSymbol = false;
    bool enableUnoccupyPort19132 = true;
    bool enableCheckRunningBDS = true;
    bool enableWelcomeText = true;
    bool enableFixMcBug = true;
	
    bool enableOutputFilter = false;
    bool onlyFilterConsoleOutput = true;
    std::vector<std::string> outputFilterRegex;

    // Runtime Config
    LLServerStatus serverStatus = LLServerStatus::Starting;
    std::thread::id tickThreadId;
};
extern LLConfig globalConfig;
extern CommandLineOption commandLineOption;

void inline to_json(nlohmann::json& j, const LLConfig& conf);

void inline from_json(const nlohmann::json& j, LLConfig& conf);

bool LoadLLConfig();
} // namespace LL

/////////////////////// LL AutoUpgrade ///////////////////////

#define LL_RELAY_INDEX "https://upgrade.litebds.com/id.json"
#define LL_UPDATE_URL_PREFIX "https://cdn.jsdelivr.net/gh/LiteLDev/Upgrade"
#define LL_UPDATE_URL_PATH "/LL/LL.json"

#define LL_UPDATE_CHECK_INTERVAL (10 * 60)
#define LL_UPDATE_CONNECTION_TIMEOUT 60

#define LL_UPDATE_PROGRAM "plugins/LiteLoader/LLAutoUpdate.dll"
#define LL_UPDATE_CHECK_PRELOAD "plugins/preload.conf"

#define LL_UPDATE_CACHE_PATH "plugins/LiteLoader/Update/"
#define LL_UPDATE_INFO_RECORD "plugins/LiteLoader/Update/Update.ini"

#define LL_UPDATE_OTHER_FILES_RECORD "plugins/LiteLoader/Versions.ini"


/////////////////////// Addon Helper ///////////////////////

#define ZIP_PROGRAM_PATH "./plugins/LiteLoader/7z/7za.exe"
#define ADDON_INSTALL_TEMP_DIR "./plugins/LiteLoader/Temp/"
#define ADDON_INSTALL_MAX_WAIT 30000
#define VALID_ADDON_FILE_EXTENSION std::set<string>({".mcpack", ".mcaddon", ".zip"})