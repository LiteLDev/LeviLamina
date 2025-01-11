#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerAuthInputPacket;
struct ServerScriptInputPacketQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ServerScriptInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static bool
    onPlayerAuthInputPacket(::ServerScriptInputPacketQueueComponent& component, ::PlayerAuthInputPacket const& packet);
    // NOLINTEND
};
