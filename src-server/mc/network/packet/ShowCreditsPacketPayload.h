#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

struct ShowCreditsPacketPayload {
public:
    // ShowCreditsPacketPayload inner types define
    enum class CreditsState : int {
        Start = 0,
        Finished = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mPlayerID;
    ::ll::TypedStorage<4, 4, ::ShowCreditsPacketPayload::CreditsState> mCreditsState;
    // NOLINTEND

};
