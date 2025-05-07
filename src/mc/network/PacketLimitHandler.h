#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class PacketLimitHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkf2ee70;
    ::ll::UntypedStorage<8, 24> mUnke5b26d;
    ::ll::UntypedStorage<1, 1>  mUnk416e17;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLimitHandler& operator=(PacketLimitHandler const&);
    PacketLimitHandler(PacketLimitHandler const&);
    PacketLimitHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) /*override*/;

    // vIndex: 1
    virtual uint getTelemetryData() /*override*/;

    // vIndex: 2
    virtual ~PacketLimitHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    );

    MCNAPI uint $getTelemetryData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
