#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/TestParameters.h"

struct GameTestRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              mTestName;
    ::ll::TypedStorage<8, 64, ::gametest::TestParameters> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRequestPacketPayload& operator=(GameTestRequestPacketPayload const&);
    GameTestRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameTestRequestPacketPayload(::GameTestRequestPacketPayload const&);

    MCAPI ~GameTestRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameTestRequestPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
