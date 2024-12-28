#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerAuthInputPacket;
struct MoveInputComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ServerMoveInputHandlerSystem {
public:
    // prevent constructor by default
    ServerMoveInputHandlerSystem& operator=(ServerMoveInputHandlerSystem const&);
    ServerMoveInputHandlerSystem(ServerMoveInputHandlerSystem const&);
    ServerMoveInputHandlerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static void digestPlayerInputPacket(::MoveInputComponent& input, ::PlayerAuthInputPacket const& packet);
    // NOLINTEND
};
