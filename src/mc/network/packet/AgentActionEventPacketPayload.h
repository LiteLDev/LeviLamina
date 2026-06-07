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
    MCAPI AgentActionEventPacketPayload();

    MCAPI AgentActionEventPacketPayload(
        ::std::string const& requestId,
        ::AgentActionType    action,
        ::Json::Value const& response
    );

    MCAPI ~AgentActionEventPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string const& requestId, ::AgentActionType action, ::Json::Value const& response);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
