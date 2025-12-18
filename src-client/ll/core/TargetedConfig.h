#pragma once
#include "ll/core/tweak/ForceEnableCheatCommands.h"

namespace ll {
struct TargetedConfig {
    bool                                                       showOutputWindow         = false;
    ll::reflection::Dispatcher<bool, ForceEnableCheatCommands> forceEnableCheatCommands = true;
    struct {
        bool alwaysLaunch = false;
    } playerInfo{};
};
} // namespace ll