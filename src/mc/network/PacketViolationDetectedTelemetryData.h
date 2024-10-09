#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {
public:
    // prevent constructor by default
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData();

public:
    // NOLINTBEGIN
    MCAPI PacketViolationDetectedTelemetryData(
        uint64                         readResult,
        std::string                    readResultContext,
        ::PacketViolationResponse      violationResponse,
        ::MinecraftPacketIds           violatingPacketId,
        class NetworkIdentifier const& netId
    );

    MCAPI void WriteEventData(class Social::Events::Event& event) const;

    MCAPI ~PacketViolationDetectedTelemetryData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const mEventName;

    // NOLINTEND
};
