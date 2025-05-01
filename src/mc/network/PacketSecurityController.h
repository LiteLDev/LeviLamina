#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/IPacketSecurityController.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

class PacketSecurityController : public ::IPacketSecurityController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc814bd;
    ::ll::UntypedStorage<8, 40> mUnk2b4bd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSecurityController& operator=(PacketSecurityController const&);
    PacketSecurityController(PacketSecurityController const&);
    PacketSecurityController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketSecurityController() /*override*/ = default;

    // vIndex: 1
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::SubClientId                                                            subClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) /*override*/;

    // vIndex: 2
    virtual uint getTelemetryData() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId subClientId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketSecurityController(::NetworkIdentifier const& netId, bool packetLimitHandlerEnabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkIdentifier const& netId, bool packetLimitHandlerEnabled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::SubClientId                                                            subClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    );

    MCNAPI uint $getTelemetryData();

    MCNAPI ::Bedrock::ErrorInfo<::std::error_code> $consumePacketError(::SubClientId subClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
