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
    // member functions
    // NOLINTBEGIN
    MCNAPI AgentActionEventPacketPayload();

    MCNAPI AgentActionEventPacketPayload(
        ::std::string const& requestId,
        ::AgentActionType    action,
        ::Json::Value const& response
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string const& requestId, ::AgentActionType action, ::Json::Value const& response);
    // NOLINTEND
};
