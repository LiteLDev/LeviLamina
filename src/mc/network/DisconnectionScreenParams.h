#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/connection/DisconnectFailReason.h"

struct DisconnectionScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9b233b;
    ::ll::UntypedStorage<8, 32> mUnkfd4668;
    ::ll::UntypedStorage<8, 32> mUnkbb674d;
    ::ll::UntypedStorage<8, 32> mUnkec38d1;
    ::ll::UntypedStorage<8, 32> mUnk91b631;
    ::ll::UntypedStorage<1, 1>  mUnkb1eea6;
    ::ll::UntypedStorage<1, 1>  mUnk7aa759;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionScreenParams& operator=(DisconnectionScreenParams const&);
    DisconnectionScreenParams(DisconnectionScreenParams const&);
    DisconnectionScreenParams();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::
        unordered_map<::Connection::DisconnectFailReason, ::std::pair<::std::string, ::std::string>> const&
        DISCONNECT_TO_ERRORSTRING_MAP();
    // NOLINTEND
};
