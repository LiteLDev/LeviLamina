#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ControlledByLocalInstanceSystem {
public:
    // ControlledByLocalInstanceSystem inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // ControlledByLocalInstanceSystem inner types define
    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // prevent constructor by default
    ControlledByLocalInstanceSystem& operator=(ControlledByLocalInstanceSystem const&);
    ControlledByLocalInstanceSystem(ControlledByLocalInstanceSystem const&);
    ControlledByLocalInstanceSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createCalculateControlledByLocalInstanceSystem@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@AEBUConfig@1@@Z
    MCAPI static struct TickingSystemWithInfo
    createCalculateControlledByLocalInstanceSystem(struct ControlledByLocalInstanceSystem::Config const& config);

    // symbol: ?createWasControlledByLocalInstanceSystem@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createWasControlledByLocalInstanceSystem();

    // NOLINTEND
};
