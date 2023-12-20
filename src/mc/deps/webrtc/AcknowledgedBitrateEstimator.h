#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AcknowledgedBitrateEstimatorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AcknowledgedBitrateEstimatorInterface; }
namespace webrtc { class BitrateEstimator; }
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimator : public ::webrtc::AcknowledgedBitrateEstimatorInterface {
public:
    // prevent constructor by default
    AcknowledgedBitrateEstimator& operator=(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AcknowledgedBitrateEstimator@webrtc@@UEAA@XZ
    virtual ~AcknowledgedBitrateEstimator();

    // vIndex: 1, symbol:
    // ?IncomingPacketFeedbackVector@AcknowledgedBitrateEstimator@webrtc@@UEAAXAEBV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@@Z
    virtual void IncomingPacketFeedbackVector(std::vector<struct webrtc::PacketResult> const&);

    // vIndex: 2, symbol: ?bitrate@AcknowledgedBitrateEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> bitrate() const;

    // vIndex: 3, symbol: ?PeekRate@AcknowledgedBitrateEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> PeekRate() const;

    // vIndex: 4, symbol: ?SetAlr@AcknowledgedBitrateEstimator@webrtc@@UEAAX_N@Z
    virtual void SetAlr(bool);

    // vIndex: 5, symbol: ?SetAlrEndedTime@AcknowledgedBitrateEstimator@webrtc@@UEAAXVTimestamp@2@@Z
    virtual void SetAlrEndedTime(class webrtc::Timestamp);

    // symbol: ??0AcknowledgedBitrateEstimator@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit AcknowledgedBitrateEstimator(class webrtc::FieldTrialsView const*);

    // symbol:
    // ??0AcknowledgedBitrateEstimator@webrtc@@QEAA@PEBVFieldTrialsView@1@V?$unique_ptr@VBitrateEstimator@webrtc@@U?$default_delete@VBitrateEstimator@webrtc@@@std@@@std@@@Z
    MCAPI
    AcknowledgedBitrateEstimator(class webrtc::FieldTrialsView const*, std::unique_ptr<class webrtc::BitrateEstimator>);

    // NOLINTEND
};

}; // namespace webrtc
