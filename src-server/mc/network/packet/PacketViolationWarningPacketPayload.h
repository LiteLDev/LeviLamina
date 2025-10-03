#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/PacketViolationSeverity.h"
#include "mc/network/packet/PacketViolationType.h"

struct PacketViolationWarningPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketViolationType>     mViolationType;
    ::ll::TypedStorage<4, 4, ::PacketViolationSeverity> mViolationSeverity;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
    ::ll::TypedStorage<8, 32, ::std::string>            mViolationContext;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationWarningPacketPayload& operator=(PacketViolationWarningPacketPayload const&);
    PacketViolationWarningPacketPayload(PacketViolationWarningPacketPayload const&);
    PacketViolationWarningPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PacketViolationWarningPacketPayload& operator=(::PacketViolationWarningPacketPayload&&);

    MCAPI ~PacketViolationWarningPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
