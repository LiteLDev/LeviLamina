#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/network/GameConnectionInfo.h"

struct GameConnectionInfoEx {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 472, ::Social::GameConnectionInfo> connectionInfo;
    ::ll::TypedStorage<8, 32, ::std::string>                 serverName;
    ::ll::TypedStorage<8, 32, ::std::string>                 worldName;
    ::ll::TypedStorage<4, 4, ::NetworkType>                  networkTypeOverride;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GameConnectionInfoEx();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
