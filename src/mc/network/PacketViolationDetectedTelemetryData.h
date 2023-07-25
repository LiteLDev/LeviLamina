#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONDETECTEDTELEMETRYDATA
public:
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&) = delete;
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&)            = delete;
    PacketViolationDetectedTelemetryData()                                                       = delete;
#endif

public:
    /**
     * @symbol
     * ??0PacketViolationDetectedTelemetryData\@\@QEAA\@_KV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI
    PacketViolationDetectedTelemetryData(unsigned __int64, std::string, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const&);
    /**
     * @symbol ?WriteEventData\@PacketViolationDetectedTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event&) const;
    /**
     * @symbol ??1PacketViolationDetectedTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ~PacketViolationDetectedTelemetryData();

    // private:

private:
    /**
     * @symbol
     * ?mEventName\@PacketViolationDetectedTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;
};
