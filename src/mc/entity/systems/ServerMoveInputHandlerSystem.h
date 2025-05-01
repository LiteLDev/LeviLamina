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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();

    MCNAPI static void digestPlayerInputPacket(::MoveInputComponent& input, ::PlayerAuthInputPacket const& packet);
    // NOLINTEND
};
