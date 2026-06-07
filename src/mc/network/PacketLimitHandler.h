#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketGroupDefinition;
// clang-format on

class PacketLimitHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketGroupDefinition>> mPacketGroupDefinition;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::error_code>>        mLastResult;
    ::ll::TypedStorage<1, 1, uchar>                                      mViolationLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLimitHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& outIsNewOrUpdatedViolation,
        bool*
    ) /*override*/;

    virtual uint getTelemetryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PacketLimitHandler(
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    );

    MCNAPI ::PacketViolationResponse
    _checkLimitThreshold(::MinecraftPacketIds packetId, bool* outIsNewOrUpdatedViolation);

    MCNAPI ::Bedrock::ErrorInfo<::std::error_code> consumeViolation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& outIsNewOrUpdatedViolation,
        bool*
    );

    MCNAPI uint $getTelemetryData();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
