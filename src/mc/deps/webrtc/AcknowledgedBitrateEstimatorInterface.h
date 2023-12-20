#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimatorInterface {
public:
    // prevent constructor by default
    AcknowledgedBitrateEstimatorInterface& operator=(AcknowledgedBitrateEstimatorInterface const&);
    AcknowledgedBitrateEstimatorInterface(AcknowledgedBitrateEstimatorInterface const&);
    AcknowledgedBitrateEstimatorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AcknowledgedBitrateEstimatorInterface@webrtc@@UEAA@XZ
    virtual ~AcknowledgedBitrateEstimatorInterface();

    // vIndex: 1, symbol:
    // ?IncomingPacketFeedbackVector@RobustThroughputEstimator@webrtc@@UEAAXAEBV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@@Z
    virtual void IncomingPacketFeedbackVector(std::vector<struct webrtc::PacketResult> const&) = 0;

    // vIndex: 2, symbol: ?bitrate@RobustThroughputEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> bitrate() const = 0;

    // vIndex: 3, symbol: ?PeekRate@RobustThroughputEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> PeekRate() const = 0;

    // vIndex: 4, symbol: ?SetAlr@AcknowledgedBitrateEstimator@webrtc@@UEAAX_N@Z
    virtual void SetAlr(bool) = 0;

    // vIndex: 5, symbol: ?SetAlrEndedTime@AcknowledgedBitrateEstimator@webrtc@@UEAAXVTimestamp@2@@Z
    virtual void SetAlrEndedTime(class webrtc::Timestamp) = 0;

    // symbol:
    // ?Create@AcknowledgedBitrateEstimatorInterface@webrtc@@SA?AV?$unique_ptr@VAcknowledgedBitrateEstimatorInterface@webrtc@@U?$default_delete@VAcknowledgedBitrateEstimatorInterface@webrtc@@@std@@@std@@PEBVFieldTrialsView@2@@Z
    MCAPI static std::unique_ptr<class webrtc::AcknowledgedBitrateEstimatorInterface>
    Create(class webrtc::FieldTrialsView const*);

    // NOLINTEND
};

}; // namespace webrtc
