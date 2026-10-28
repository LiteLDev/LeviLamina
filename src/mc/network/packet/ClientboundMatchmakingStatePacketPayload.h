#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MatchmakingState.h"
#include "mc/network/packet/MatchmakingStateOptions.h"

struct ClientboundMatchmakingStatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MatchmakingState>                          mState;
    ::ll::TypedStorage<8, 32, ::std::string>                              mDestinationName;
    ::ll::TypedStorage<8, 56, ::std::optional<::MatchmakingStateOptions>> mOptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClientboundMatchmakingStatePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
