#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSettingsResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mFormId;
    ::ll::TypedStorage<8, 32, ::std::string> mFormJSON;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSettingsResponsePacketPayload& operator=(ServerSettingsResponsePacketPayload const&);
    ServerSettingsResponsePacketPayload(ServerSettingsResponsePacketPayload const&);
    ServerSettingsResponsePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ServerSettingsResponsePacketPayload& operator=(::ServerSettingsResponsePacketPayload&&);

    MCAPI ~ServerSettingsResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
