#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ServerPlayerBroadcastMoveSystem {
public:
    // prevent constructor by default
    ServerPlayerBroadcastMoveSystem& operator=(ServerPlayerBroadcastMoveSystem const&);
    ServerPlayerBroadcastMoveSystem(ServerPlayerBroadcastMoveSystem const&);
    ServerPlayerBroadcastMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
