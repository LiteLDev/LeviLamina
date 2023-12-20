#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AcknowledgedBitrateEstimatorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AcknowledgedBitrateEstimatorInterface; }
namespace webrtc { class DataRate; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct RobustThroughputEstimatorSettings; }
// clang-format on

namespace webrtc {

class RobustThroughputEstimator : public ::webrtc::AcknowledgedBitrateEstimatorInterface {
public:
    // prevent constructor by default
    RobustThroughputEstimator& operator=(RobustThroughputEstimator const&);
    RobustThroughputEstimator(RobustThroughputEstimator const&);
    RobustThroughputEstimator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RobustThroughputEstimator@webrtc@@UEAA@XZ
    virtual ~RobustThroughputEstimator();

    // vIndex: 1, symbol:
    // ?IncomingPacketFeedbackVector@RobustThroughputEstimator@webrtc@@UEAAXAEBV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@@Z
    virtual void IncomingPacketFeedbackVector(std::vector<struct webrtc::PacketResult> const&);

    // vIndex: 2, symbol: ?bitrate@RobustThroughputEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> bitrate() const;

    // vIndex: 3, symbol: ?PeekRate@RobustThroughputEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> PeekRate() const;

    // vIndex: 4, symbol: ?SetAlr@RobustThroughputEstimator@webrtc@@UEAAX_N@Z
    virtual void SetAlr(bool);

    // vIndex: 5, symbol: ?SetAlrEndedTime@RobustThroughputEstimator@webrtc@@UEAAXVTimestamp@2@@Z
    virtual void SetAlrEndedTime(class webrtc::Timestamp);

    // symbol: ??0RobustThroughputEstimator@webrtc@@QEAA@AEBURobustThroughputEstimatorSettings@1@@Z
    MCAPI explicit RobustThroughputEstimator(struct webrtc::RobustThroughputEstimatorSettings const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FirstPacketOutsideWindow@RobustThroughputEstimator@webrtc@@AEAA_NXZ
    MCAPI bool FirstPacketOutsideWindow();

    // NOLINTEND
};

}; // namespace webrtc
