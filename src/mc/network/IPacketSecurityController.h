#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace Bedrock { struct ImplCtor; }
// clang-format on

class IPacketSecurityController
: public ::Bedrock::ImplBase<
      ::IPacketSecurityController,
      ::Bedrock::ImplCtor(::NetworkIdentifier const&),
      ::Bedrock::ImplCtor(::NetworkIdentifier const&, ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds,
        ::SubClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const&,
        bool*
    ) = 0;

    virtual uint getTelemetryData() = 0;

    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId) = 0;

    virtual void reloadPacketLimitConfig(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>) = 0;

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
