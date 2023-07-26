/**
 * @file  PacketViolationDetectedTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketViolationDetectedTelemetryData.
 *
 */
class PacketViolationDetectedTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONDETECTEDTELEMETRYDATA
public:
    class PacketViolationDetectedTelemetryData& operator=(class PacketViolationDetectedTelemetryData const &) = delete;
    PacketViolationDetectedTelemetryData(class PacketViolationDetectedTelemetryData const &) = delete;
    PacketViolationDetectedTelemetryData() = delete;
#endif

public:
    /**
     * @symbol  ??0PacketViolationDetectedTelemetryData\@\@QEAA\@AEBUExtendedStreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI PacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &);
    /**
     * @symbol  ?WriteEventData\@PacketViolationDetectedTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event &) const;
    /**
     * @symbol  ??1PacketViolationDetectedTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ~PacketViolationDetectedTelemetryData();

//private:

private:
    /**
     * @symbol  ?mEventName\@PacketViolationDetectedTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;

};