#pragma once

#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/tweak/SimpleServerLogger.h"
#include "ll/core/tweak/bugfix/ArrayTagBugFix.h"

namespace ll {

struct LeviConfig {

    int version = 7;

    std::string language = "system";
    struct {
        bool colorLog = true;
        int  logLevel = 4;
    } logger{};

    struct {
        struct {
            bool        enabled    = true;
            std::string path       = R"(.\plugins\LeviLamina\CrashLogger.exe)";
            std::string logPath    = R"(.\logs\crash)";
            std::string dumpPrefix = "minidump_";
            std::string logPrefix  = "trace_";
        } crashLogger{};

        struct {
            struct {
                reflection::Dispatcher<bool, ArrayTagBugFix> fixArrayTagCompareBug = true;
            } bugfixes{};

            bool tpdimCommand             = true;
            bool settingsCommand          = true;
            bool disableAutoCompactionLog = true;
        } tweak{};

        bool checkRunningBDS = true;

        reflection::Dispatcher<SimpleServerLoggerConfig, SimpleServerLogger> simpleServerLogger{};

        std::unordered_map<std::string, std::string> resourcePackEncryptionMap = {
            {"<UUID>", "<KEY>"}
        };

    } modules{};
};

LLETAPI LeviConfig globalConfig;

bool loadLeviConfig();

bool saveLeviConfig();

} // namespace ll
