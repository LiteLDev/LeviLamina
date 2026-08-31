#pragma once
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/tweak/ForceEnableCheatCommands.h"


namespace ll {
struct TargetedConfig {
    bool                                                       showOutputWindow         = false;
    ll::reflection::Dispatcher<bool, ForceEnableCheatCommands> forceEnableCheatCommands = true;
    struct {
        bool alwaysLaunch = false;
    } playerInfo{};
    struct {
        bool enable                      = true;
        bool subChunkRequest             = true;
        bool simulatedPlayerChunkLoading = true;
    } vulnerabilityFixes;
};
} // namespace ll
