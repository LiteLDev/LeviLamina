#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct ClientJoinedEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             mTicks;
    ::ll::TypedStorage<4, 4, int>                             mBlocks;
    ::ll::TypedStorage<1, 1, bool>                            mDisconnected;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDisconnectMessage;
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>           mIdentifier;
    ::ll::TypedStorage<1, 1, ::SubClientId>                   mSubClientId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPlayfabId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void disconnect(::std::optional<::std::string> message);
    // NOLINTEND
};
