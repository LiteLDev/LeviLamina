#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerToClientHandshakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerToClientHandshakePacketPayload(ServerToClientHandshakePacketPayload const&);
    ServerToClientHandshakePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ServerToClientHandshakePacketPayload& operator=(::ServerToClientHandshakePacketPayload const&);

    MCFOLD ::ServerToClientHandshakePacketPayload& operator=(::ServerToClientHandshakePacketPayload&&);

    MCAPI ~ServerToClientHandshakePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
