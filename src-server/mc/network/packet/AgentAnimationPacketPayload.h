#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/actor/agent/AgentAnimation.h"

struct AgentAnimationPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentAnimation> mAnim;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    // NOLINTEND

};
