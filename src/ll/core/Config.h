#pragma once

#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/tweak/ForceEnableCheatCommands.h"
#include "ll/core/tweak/SimpleServerLogger.h"


namespace ll {

struct LeviConfig {

    int version = 19;

    std::string language = "system";
    struct {
        bool colorLog = true;
        int  logLevel = 4;
    } logger{};

    struct {
        struct {
            bool        enabled      = true;
            bool        useBuiltin   = false;
            std::string externalPath = R"(.\plugins\LeviLamina\CrashLogger.exe)";
            std::string logPath      = R"(.\logs\crash)";
            std::string dumpPrefix   = "minidump_";
            std::string logPrefix    = "trace_";
        } crashLogger{};

        struct {
            bool                                                       disableAutoCompactionLog = true;
            ll::reflection::Dispatcher<bool, ForceEnableCheatCommands> forceEnableCheatCommands = true;
        } tweak{};

        reflection::Dispatcher<SimpleServerLoggerConfig, SimpleServerLogger> simpleServerLogger{};

        struct {
            bool enabled             = true;
            bool crashCommand        = false;
            bool tpdimCommand        = true;
            bool versionCommand      = true;
            bool memstatusCommand    = true;
            bool pluginManageCommand = true;
        } commands{};

        bool checkRunningBDS = true;

        struct {
            bool alwaysLaunch = false;
        } playerInfo{};


        std::unordered_map<std::string, std::string> resourcePackEncryptionMap = {
            {"<UUID>", "<KEY>"}
        };

    } modules{};
};

LLETAPI LeviConfig globalConfig;

bool loadLeviConfig();

bool saveLeviConfig();

} // namespace ll
