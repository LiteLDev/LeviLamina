#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {

public:
    // prevent constructor by default
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&) = delete;
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&)            = delete;
    PacketViolationDetectedTelemetryData()                                                       = delete;

public:
    /**
     * @symbol
     * ??0PacketViolationDetectedTelemetryData\@\@QEAA\@_KV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI
    PacketViolationDetectedTelemetryData(unsigned __int64, std::string, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?WriteEventData\@PacketViolationDetectedTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event&) const; // NOLINT
    /**
     * @symbol ??1PacketViolationDetectedTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ~PacketViolationDetectedTelemetryData(); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mEventName\@PacketViolationDetectedTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName; // NOLINT
};
