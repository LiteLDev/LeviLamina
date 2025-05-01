#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace Bedrock { struct ImplCtor; }
// clang-format on

class IPacketSecurityController : public ::Bedrock::ImplBase<
                                      ::IPacketSecurityController,
                                      ::Bedrock::ImplCtor(::NetworkIdentifier const&),
                                      ::Bedrock::ImplCtor(::NetworkIdentifier const&, bool)> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::PacketViolationResponse
    checkForViolation(::MinecraftPacketIds, ::SubClientId, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const&, bool*) = 0;

    // vIndex: 2
    virtual uint getTelemetryData() = 0;

    // vIndex: 3
    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId) = 0;

    // vIndex: 0
    virtual ~IPacketSecurityController() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
