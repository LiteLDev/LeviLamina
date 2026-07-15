#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class IPacketSecurityHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const&,
        bool*
    ) = 0;

    virtual uint getTelemetryData() = 0;

    virtual ~IPacketSecurityHandler() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
