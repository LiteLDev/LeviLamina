#pragma once

#include <set>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/io/RotatePolicy.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/TargetedConfig.h"

#include "mc/server/commands/CommandPermissionLevel.h"

namespace ll {

struct LeviConfig {

    int version = 42;

    std::string language = "system";

    /// Controls how `logs/latest.log` is rotated and how long the archives are kept.
    io::RotateConfig logRotate{};

    struct {
        struct CmdSetting {
            bool                   enabled    = true;
            CommandPermissionLevel permission = CommandPermissionLevel::GameDirectors;
        };
        struct {
            CmdSetting tpdimCommand{};
            CmdSetting crashCommand{false};
            CmdSetting versionCommand{};
            CmdSetting modManageCommand{true, CommandPermissionLevel::Admin};
        } command{};
        struct {
            bool                       enabled        = true;
            bool                       builtin        = false;
            bool                       uploadToSentry = true;
            std::optional<std::string> externalpath;
        } crashLogger{};

        bool disableAutoCompactionLog = true;

    } modules{};

    TargetedConfig targeted{};
};

LeviConfig& getLeviConfig();

bool saveLeviConfig();

} // namespace ll
