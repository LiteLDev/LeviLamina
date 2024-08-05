#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/resources/PacketViolationResponse.h"

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
    MCAPI
    PacketViolationDetectedTelemetryData(uint64, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, class NetworkIdentifier const&);

    MCAPI void WriteEventData(class Social::Events::Event& event) const;

    MCAPI ~PacketViolationDetectedTelemetryData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const mEventName;

    // NOLINTEND
};
