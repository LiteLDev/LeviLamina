#pragma once

#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/Statistics.h"
#include "ll/core/tweak/ForceEnableCheatCommands.h"
#include "ll/core/tweak/SimpleServerLogger.h"

namespace ll {
struct TargetedConfig {
    ll::reflection::Dispatcher<bool, Statistics>                         enableStatitics = true;
    reflection::Dispatcher<SimpleServerLoggerConfig, SimpleServerLogger> simpleServerLogger{};
    ll::reflection::Dispatcher<bool, ForceEnableCheatCommands>           forceEnableCheatCommands = true;
    bool                                                                 checkRunningBDS          = true;
    struct {
        bool alwaysLaunch = false;
    } playerInfo{};
};
} // namespace ll
