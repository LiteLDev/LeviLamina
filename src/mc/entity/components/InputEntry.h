#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/input/InputMode.h"
#include "mc/network/packet/PlayerAuthInputPacketPayload.h"

struct InputEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode>                                                        mInputMode;
    ::ll::TypedStorage<8, 16, ::Bedrock::EnumSet<::PlayerAuthInputPacketPayload::InputData, 66>> mInputData;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                             mRawMoveVector;
    // NOLINTEND
};
