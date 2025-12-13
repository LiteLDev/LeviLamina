#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSettingsResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkda4612;
    ::ll::UntypedStorage<8, 32> mUnka45811;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSettingsResponsePacketPayload& operator=(ServerSettingsResponsePacketPayload const&);
    ServerSettingsResponsePacketPayload(ServerSettingsResponsePacketPayload const&);
    ServerSettingsResponsePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerSettingsResponsePacketPayload& operator=(::ServerSettingsResponsePacketPayload&&);

    MCNAPI ~ServerSettingsResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
