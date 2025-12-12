#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentAnimationPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc89a14;
    ::ll::UntypedStorage<8, 8> mUnk9e40db;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentAnimationPacketPayload& operator=(AgentAnimationPacketPayload const&);
    AgentAnimationPacketPayload(AgentAnimationPacketPayload const&);
    AgentAnimationPacketPayload();
};
