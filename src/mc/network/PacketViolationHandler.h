#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

class PacketViolationHandler {
public:
    // PacketViolationHandler inner types declare
    // clang-format off
    struct PacketViolation;
    // clang-format on

    // PacketViolationHandler inner types define
    struct PacketViolation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160> mUnk5e5775;
        ::ll::UntypedStorage<4, 4>   mUnk21da3b;
        ::ll::UntypedStorage<4, 4>   mUnk331e7c;
        ::ll::UntypedStorage<4, 4>   mUnka0ab1b;
        ::ll::UntypedStorage<8, 24>  mUnke39d1d;
        ::ll::UntypedStorage<4, 4>   mUnk344fc3;
        ::ll::UntypedStorage<8, 8>   mUnkdf4bf6;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketViolation& operator=(PacketViolation const&);
        PacketViolation(PacketViolation const&);
        PacketViolation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkd8ca2f;
    ::ll::UntypedStorage<8, 16> mUnke5464e;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);
    PacketViolationHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PacketViolationResponse _handleViolation(
        ::MinecraftPacketIds       packetId,
        ::std::error_code const&   result,
        ::NetworkIdentifier const& netId,
        bool*                      outIsNewOrUpdatedViolation
    );
    // NOLINTEND
};
