#pragma once

#include <Nlohmann/json.hpp>
#include <string>
#include <thread>

/////////////////////// CrashLogger ///////////////////////
// When comes with these plugins, disable builtin CrashLogger since they will cause crash
constexpr const char* NoCrashLogger[] = {"AntiCheats"};
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
    std::string language = "en_US";

    bool enableScriptEngine = true;
    bool alwaysLaunchScriptEngine = false;

    bool enableAddonsHelper = true;
    std::string addonsInstallPath = "plugins/AddonsHelper";

    bool enableCrashLogger = true;
    std::string crashLoggerPath = "plugins\\LiteLoader\\CrashLogger_Daemon.exe";
    std::string antiGiveCommand = "kick {player}";
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
    bool enableEconomyCore = true;
    bool enableTpdimCommand = true;
    bool enableForceUtf8Input = false;
    std::vector<std::string> outputFilterRegex = {};

    // Runtime Config
    LLServerStatus serverStatus = LLServerStatus::Starting;
    std::thread::id tickThreadId;
};
extern LLConfig globalConfig;
extern CommandLineOption commandLineOption;

void inline to_json(nlohmann::json& j, const LLConfig& conf);

void inline from_json(const nlohmann::json& j, LLConfig& conf);

bool LoadLLConfig();

bool SaveLLConfig();
} // namespace LL

/////////////////////// Addon Helper ///////////////////////

#define ZIP_PROGRAM_PATH "./plugins/LiteLoader/7z/7za.exe"
#define ADDON_INSTALL_TEMP_DIR "./plugins/LiteLoader/Temp/"
#define ADDON_INSTALL_MAX_WAIT 30000
#define VALID_ADDON_FILE_EXTENSION std::set<string>({".mcpack", ".mcaddon", ".zip"})