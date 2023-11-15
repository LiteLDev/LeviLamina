#pragma once

#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "ll/api/base/Macro.h"

/////////////////////// LL Configs ///////////////////////

namespace ll {

struct LeviConfig {
    int version = 4;

    std::string language = "system";
    struct {
        bool colorLog = true;
        int  logLevel = 4;
    } logger{};

    struct ExtraMainPluginSettings {
        bool enabled      = true;
        bool alwaysLaunch = false;
    };
    ExtraMainPluginSettings scriptEngine{};
    ExtraMainPluginSettings economyCore{};

    struct {
        struct {
            bool        enabled    = true;
            std::string path       = R"(.\plugins\LeviLamina\CrashLogger.exe)";
            std::string logPath    = R"(.\logs\crash)";
            std::string dumpPrefix = "minidump_";
            std::string logPrefix  = "trace_";
        } crashLogger{};

        struct {
            bool                     enabled         = true;
            std::vector<std::string> autoInstallPath = {R"(.\plugins\AddonsHelper\)"};
            std::string              tempPath        = {R"(.\plugins\AddonsHelper\Temp\)"};
            std::set<std::string>    extension       = {".mcpack", ".mcaddon", ".zip"};
        } addonsHelper{};

        struct {
            std::string path = R"(.\plugins\LeviLamina\7z\7za.exe)";
        } compressor{};

        struct {
            struct {
                bool fixArrayTagCompareBug = true;
            } bugfixes{};

            bool tpdimCommand             = true;
            bool settingsCommand          = true;
            bool disableAutoCompactionLog = true;
        } tweak{};

        bool checkRunningBDS    = true;
        bool simpleServerLogger = true;

        std::unordered_map<std::string, std::string> resourcePackEncryptionMap = {
            {"<UUID>", "<KEY>"}
        };

    } modules{};
};

LLETAPI LeviConfig globalConfig;

bool loadLeviConfig();

bool saveLeviConfig();

} // namespace ll
