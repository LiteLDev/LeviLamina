#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

struct DisconnectionScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9b233b;
    ::ll::UntypedStorage<4, 4>  mUnk14d4ea;
    ::ll::UntypedStorage<8, 32> mUnkfd4668;
    ::ll::UntypedStorage<8, 32> mUnkbb674d;
    ::ll::UntypedStorage<8, 32> mUnkec38d1;
    ::ll::UntypedStorage<8, 32> mUnk91b631;
    ::ll::UntypedStorage<8, 32> mUnk4a4096;
    ::ll::UntypedStorage<1, 1>  mUnkb1eea6;
    ::ll::UntypedStorage<1, 1>  mUnk7aa759;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionScreenParams& operator=(DisconnectionScreenParams const&);
    DisconnectionScreenParams(DisconnectionScreenParams const&);
    DisconnectionScreenParams();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Connection::DisconnectFailReason disconnectFailReason,
        ::std::string                      titleStringOverride,
        ::std::string                      bodyStringOverride,
        ::Connection::DisconnectionStage   disconnectStage,
        ::std::string                      screenNameOverride,
        ::std::string                      telemetryString,
        bool                               leaveGame,
        bool                               isSubClient,
        ::std::string                      codewordOverride
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
