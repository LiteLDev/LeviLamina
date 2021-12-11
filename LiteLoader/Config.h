#pragma once
#include <Nlohmann/json.hpp>
#include <string>

/////////////////////// CrashLogger ///////////////////////
// When comes with these plugins, disable builtin CrashLogger since they will cause crash
constexpr const char* NoCrashLogger[] = {"BDSNetRunner", "AntiCheats"};


/////////////////////// SEH Protection ///////////////////////
// Remove this to disable SEH all around LiteLoader
#define ENABLE_SEH_PROTECTION


/////////////////////// LL Configs ///////////////////////
#define LITELOADER_CONFIG_FILE "plugins/LiteLoader/LiteLoader.json"

namespace LL {
struct LLConfig {
    bool debugMode = false;
    int logLevel = 4;
    ::std::string language = "en";

    bool enableAutoUpdate = true;
    bool enableCrashLogger = true;
    bool enableSimpleServerLogger = true;
    ::std::string crashLoggerPath = "plugins\\LiteLoader\\CrashLogger_Daemon.exe";

    bool enableFixDisconnectBug = true;
    bool enableFixListenPort = true;
};
extern LLConfig globalConfig;

void inline to_json(nlohmann::json& j, const LLConfig& conf);
void inline from_json(const nlohmann::json& j, LLConfig& conf);
} // namespace LL

bool LoadLLConfig();


/////////////////////// LL AutoUpgrade ///////////////////////

#define LL_RELAY_INDEX "https://upgrade.litebds.com/id.json"
#define LL_UPDATE_URL_PREFIX "https://cdn.jsdelivr.net/gh/LiteLDev/Upgrade"
#define LL_UPDATE_URL_PATH "/LL/LL.json"

#define LL_UPDATE_CHECK_INTERVAL 10 * 60
#define LL_UPDATE_CONNECTION_TIMEOUT 60

#define LL_UPDATE_PROGRAM "plugins/LiteLoader/LLAutoUpdate.dll"
#define LL_UPDATE_CHECK_PRELOAD "plugins/preload.conf"

#define LL_UPDATE_CACHE_PATH "plugins/LiteLoader/Update/"
#define LL_UPDATE_INFO_RECORD "plugins/LiteLoader/Update/Update.ini"

#define LL_UPDATE_OTHER_FILES_RECORD "plugins/LiteLoader/Versions.ini"