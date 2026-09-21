#pragma once

#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/Statistics.h"
#include "ll/core/tweak/ForceEnableCheatCommands.h"
#include "ll/core/tweak/PreserveInputLine.h"
#include "ll/core/tweak/SimpleServerLogger.h"
#include "mc/deps/nether_net/StunRelayServer.h"

namespace ll {
struct TargetedConfig {
    ll::reflection::Dispatcher<bool, Statistics>                         enableStatistics = true;
    reflection::Dispatcher<SimpleServerLoggerConfig, SimpleServerLogger> simpleServerLogger{};
    ll::reflection::Dispatcher<bool, ForceEnableCheatCommands>           forceEnableCheatCommands = true;
    bool                                                                 checkRunningBDS          = true;
    ll::reflection::Dispatcher<bool, PreserveInputLine>                  preserveInputLine        = true;
    struct {
        bool                     enable     = true;
        bool                     singlePort = true;
        std::string              serverIP;
        std::vector<std::string> stunServers = {"stun:stun.l.google.com:19302", "stun:stun.miwifi.com:3478"};
    } netherNetPatch;
    struct {
        bool alwaysLaunch = false;
    } playerInfo{};
    struct {
        bool enable                      = true;
        bool subChunkRequest             = true;
        bool itemReadUserData            = true;
        bool disconnectClient            = true;
        bool limitIPFrequency            = true;
        bool simulatedPlayerChunkLoading = true;
    } vulnerabilityFixes;
};
} // namespace ll
