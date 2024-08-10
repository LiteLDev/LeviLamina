#pragma once

#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/TargetedConfig.h"
#include "ll/core/tweak/ForceEnableCheatCommands.h"

#include "mc/server/commands/CommandPermissionLevel.h"

namespace ll {

struct LeviConfig {

    int version = 26;

    std::string language = "system";
    struct {
        struct {
            bool        enabled      = true;
            bool        useBuiltin   = false;
            std::string externalpath = "CrashLogger.exe";
            std::string logPath      = R"(.\logs\crash)";
            std::string dumpPrefix   = "minidump_";
            std::string logPrefix    = "trace_";
        } crashLogger{};

        struct {
            bool                                                       disableAutoCompactionLog = true;
            ll::reflection::Dispatcher<bool, ForceEnableCheatCommands> forceEnableCheatCommands = true;
        } tweak{};

        TargetedConfig targeted{};

        struct CmdSetting {
            bool                   enabled    = true;
            CommandPermissionLevel permission = CommandPermissionLevel::GameDirectors;
        };
        struct {
            struct {
                bool enabled = true;
            } tpdimOverload{};
            CmdSetting crashCommand{false};
            CmdSetting versionCommand{};
            CmdSetting memstatsCommand{true, CommandPermissionLevel::Host};
            CmdSetting modManageCommand{true, CommandPermissionLevel::Admin};
        } command{};

        bool checkRunningBDS = true;

        struct {
            bool alwaysLaunch = false;
        } playerInfo{};

    } modules{};
};

LeviConfig& getLeviConfig();

bool saveLeviConfig();

} // namespace ll
