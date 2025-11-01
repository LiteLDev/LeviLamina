#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class PacketViolationHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkd8ca2f;
    ::ll::UntypedStorage<8, 8> mUnk906264;
    ::ll::UntypedStorage<8, 176> mUnk14f8c8;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);
    PacketViolationHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds packetId, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result, bool* outIsNewOrUpdatedViolation) /*override*/;

    // vIndex: 1
    virtual uint getTelemetryData() /*override*/;

    // vIndex: 2
    virtual ~PacketViolationHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse _handleViolation(::MinecraftPacketIds packetId, ::std::error_code const& result, bool* outIsNewOrUpdatedViolation);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(::MinecraftPacketIds packetId, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result, bool* outIsNewOrUpdatedViolation);

    MCNAPI uint $getTelemetryData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
