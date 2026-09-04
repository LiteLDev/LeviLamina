#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/network/GameConnectionInfo.h"

struct GameConnectionInfoEx {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 520, ::Social::GameConnectionInfo> connectionInfo;
    ::ll::TypedStorage<8, 32, ::std::string>                 serverName;
    ::ll::TypedStorage<8, 32, ::std::string>                 worldName;
    ::ll::TypedStorage<4, 4, ::NetworkType>                  networkTypeOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfoEx& operator=(GameConnectionInfoEx const&);
    GameConnectionInfoEx();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameConnectionInfoEx(::GameConnectionInfoEx const&);

    MCAPI ~GameConnectionInfoEx();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameConnectionInfoEx const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
