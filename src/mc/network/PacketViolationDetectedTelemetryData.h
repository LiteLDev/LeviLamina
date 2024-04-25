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
    // symbol:
    // ??0PacketViolationDetectedTelemetryData@@QEAA@_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@@Z
    MCAPI
    PacketViolationDetectedTelemetryData(uint64, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, class NetworkIdentifier const&);

    // symbol: ?WriteEventData@PacketViolationDetectedTelemetryData@@QEBAXAEAVEvent@Events@Social@@@Z
    MCAPI void WriteEventData(class Social::Events::Event& event) const;

    // symbol: ??1PacketViolationDetectedTelemetryData@@QEAA@XZ
    MCAPI ~PacketViolationDetectedTelemetryData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mEventName@PacketViolationDetectedTelemetryData@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const mEventName;

    // NOLINTEND
};
