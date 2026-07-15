#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/IPacketSecurityController.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketRateLimitFeature.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketViolationHandler;
// clang-format on

class PacketSecurityController : public ::IPacketSecurityController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketViolationHandler>> mPacketViolationHandler;
    ::ll::TypedStorage<8, 40, ::std::optional<::PacketRateLimitFeature>>  mPacketRateLimitFeature;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSecurityController() /*override*/ = default;

    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds,
        ::SubClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const&,
        bool*
    ) /*override*/;

    virtual uint getTelemetryData() /*override*/;

    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId) /*override*/;

    virtual void reloadPacketLimitConfig(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
