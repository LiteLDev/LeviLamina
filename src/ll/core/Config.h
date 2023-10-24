#pragma once

#include <string>
#include <thread>

#include "Nlohmann/json.hpp"
#include "ll/api/LLAPI.h"

/////////////////////// LL Configs ///////////////////////
#define LL_CONFIG_FILE "plugins/LeviLamina/config.json"

namespace ll {

struct CommandLineOption {
    bool noColorOption = false;
};
struct LLConfig {
    bool        debugMode = false;
    bool        colorLog  = true;
    int         version   = 1;
    int         logLevel  = 4;
    std::string language  = "system";

    bool enableScriptEngine       = true;
    bool alwaysLaunchScriptEngine = false;

    bool        enableAddonsHelper = true;
    std::string addonsInstallPath  = R"(.\plugins\AddonsHelper\)";

    bool                               enableCrashLogger              = true;
    std::string                        crashLoggerPath                = R"(.\plugins\LeviLamina\CrashLogger.exe)";
    bool                               enableSimpleServerLogger       = true;
    bool                               enableFixListenPort            = false;
    bool                               enableUnlockCmd                = true;
    bool                               enableErrorStackTraceback      = true;
    bool                               cacheErrorStackTracebackSymbol = false;
    bool                               enableUnoccupyPort19132        = true;
    bool                               enableCheckRunningBDS          = true;
    bool                               enableWelcomeText              = true;
    bool                               enableFixMcBug                 = true;
    bool                               disableAutoCompactionLog       = true;
    bool                               enableFixBroadcastBug          = true;
    bool                               enableOutputFilter             = false;
    bool                               onlyFilterConsoleOutput        = true;
    bool                               enableEconomyCore              = true;
    bool                               enableTpdimCommand             = true;
    bool                               enableForceUtf8Input           = false;
    bool                               enableFixBDSCrash              = true;
    bool                               enableParticleAPI              = false;
    bool                               enableFixAbility               = true;
    std::vector<std::string>           outputFilterRegex              = {};
    std::map<std::string, std::string> resourcePackEncryptionMap      = {};
};

struct LLRuntimeConfig {
    ServerStatus    serverStatus = ServerStatus::Starting;
    std::thread::id tickThreadId;
};

LLETAPI LLConfig          globalConfig;
LLETAPI LLRuntimeConfig   globalRuntimeConfig;
LLETAPI CommandLineOption commandLineOption;

void inline to_json(nlohmann::json& j, LLConfig const& conf);

void inline from_json(nlohmann::json const& j, LLConfig& conf);

bool LoadLLConfig();

bool SaveLLConfig();
} // namespace ll

/////////////////////// Addon Helper ///////////////////////

#define ZIP_PROGRAM_PATH           "./plugins/LeviLamina/7z/7za.exe"
#define ADDON_INSTALL_TEMP_DIR     "./plugins/LeviLamina/Temp/"
#define ADDON_INSTALL_MAX_WAIT     30000
#define VALID_ADDON_FILE_EXTENSION std::set<std::string>({".mcpack", ".mcaddon", ".zip"})