#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/network/packet/AgentActionType.h"

struct AgentActionEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentActionType> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>    mRequestId;
    ::ll::TypedStorage<8, 16, ::Json::Value>    mResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentActionEventPacketPayload& operator=(AgentActionEventPacketPayload const&);
    AgentActionEventPacketPayload(AgentActionEventPacketPayload const&);
    AgentActionEventPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AgentActionEventPacketPayload& operator=(::AgentActionEventPacketPayload&&);

    MCNAPI ~AgentActionEventPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
