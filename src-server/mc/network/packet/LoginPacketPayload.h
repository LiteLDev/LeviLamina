#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ConnectionRequest;
// clang-format on

struct LoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mClientNetworkVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>> mConnectionRequest;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoginPacketPayload(::LoginPacketPayload const& other);

    MCAPI ::LoginPacketPayload& operator=(::LoginPacketPayload const& other);

    MCAPI ~LoginPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LoginPacketPayload const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
