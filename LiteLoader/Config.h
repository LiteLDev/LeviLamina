#pragma once
#include <string>

// LL Configs
extern bool DebugMode;
extern int LogLevel;

extern bool EnableCrashLogger;
extern std::string CrashLoggerProcessPath;
extern bool EnableFixDisconnectBug;
extern bool EnableFixListenPort;

bool LoadLLConfig();

// When comes with these plugins, disable builtin CrashLogger since they will cause crash
constexpr const char* NoCrashLogger[] = { "BDSNetRunner", "AntiCheats" };

// LL Config File Path
#define LITELOADER_CONFIG_FILE "plugins/LiteLoader/LiteLoader.json"

// LL Config File Default Content
#define LITELOADER_CONFIG_DEFAULT R"({
    "DebugMode": false,
    "LogLevel": 4,
    
    "Modules": {
        "CrashLogger": {
            "enabled": true,
            "path": "plugins\\LiteLoader\\CrashLogger_Daemon.exe"
        },
        "FixDisconnectBug": {
            "enabled": true
        },
        "FixListenPort": {
            "enabled": true
        }
    }
})"