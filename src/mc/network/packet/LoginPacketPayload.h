#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb3cccc;
    ::ll::UntypedStorage<8, 8> mUnk597bef;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoginPacketPayload(::LoginPacketPayload const& other);

    MCNAPI ::LoginPacketPayload& operator=(::LoginPacketPayload const& other);

    MCNAPI ~LoginPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LoginPacketPayload const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
