#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerToClientHandshakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk14363a;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerToClientHandshakePacketPayload& operator=(ServerToClientHandshakePacketPayload const&);
    ServerToClientHandshakePacketPayload(ServerToClientHandshakePacketPayload const&);
    ServerToClientHandshakePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerToClientHandshakePacketPayload& operator=(::ServerToClientHandshakePacketPayload&&);

    MCNAPI ~ServerToClientHandshakePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
