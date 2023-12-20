#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStatePredictor; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class DelayBasedBwe {
public:
    // DelayBasedBwe inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // DelayBasedBwe inner types define
    struct Result {
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Result@DelayBasedBwe@webrtc@@QEAA@XZ
        MCAPI Result();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DelayBasedBwe& operator=(DelayBasedBwe const&);
    DelayBasedBwe(DelayBasedBwe const&);
    DelayBasedBwe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DelayBasedBwe@webrtc@@UEAA@XZ
    virtual ~DelayBasedBwe();

    // symbol: ??0DelayBasedBwe@webrtc@@QEAA@PEBVFieldTrialsView@1@PEAVRtcEventLog@1@PEAVNetworkStatePredictor@1@@Z
    MCAPI
    DelayBasedBwe(class webrtc::FieldTrialsView const*, class webrtc::RtcEventLog*, class webrtc::NetworkStatePredictor*);

    // symbol: ?GetExpectedBwePeriod@DelayBasedBwe@webrtc@@QEBA?AVTimeDelta@2@XZ
    MCAPI class webrtc::TimeDelta GetExpectedBwePeriod() const;

    // symbol:
    // ?IncomingPacketFeedbackVector@DelayBasedBwe@webrtc@@QEAA?AUResult@12@AEBUTransportPacketsFeedback@2@V?$optional@VDataRate@webrtc@@@std@@1V?$optional@UNetworkStateEstimate@webrtc@@@6@_N@Z
    MCAPI struct webrtc::DelayBasedBwe::Result IncomingPacketFeedbackVector(
        struct webrtc::TransportPacketsFeedback const&,
        std::optional<class webrtc::DataRate>,
        std::optional<class webrtc::DataRate>,
        std::optional<struct webrtc::NetworkStateEstimate>,
        bool
    );

    // symbol: ?OnRttUpdate@DelayBasedBwe@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void OnRttUpdate(class webrtc::TimeDelta);

    // symbol: ?SetMinBitrate@DelayBasedBwe@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetMinBitrate(class webrtc::DataRate);

    // symbol: ?SetStartBitrate@DelayBasedBwe@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetStartBitrate(class webrtc::DataRate);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?IncomingPacketFeedback@DelayBasedBwe@webrtc@@AEAAXAEBUPacketResult@2@VTimestamp@2@@Z
    MCAPI void IncomingPacketFeedback(struct webrtc::PacketResult const&, class webrtc::Timestamp);

    // symbol:
    // ?MaybeUpdateEstimate@DelayBasedBwe@webrtc@@AEAA?AUResult@12@V?$optional@VDataRate@webrtc@@@std@@0V?$optional@UNetworkStateEstimate@webrtc@@@5@_N2VTimestamp@2@@Z
    MCAPI struct webrtc::DelayBasedBwe::Result MaybeUpdateEstimate(
        std::optional<class webrtc::DataRate>,
        std::optional<class webrtc::DataRate>,
        std::optional<struct webrtc::NetworkStateEstimate>,
        bool,
        bool,
        class webrtc::Timestamp
    );

    // symbol:
    // ?UpdateEstimate@DelayBasedBwe@webrtc@@AEAA_NVTimestamp@2@V?$optional@VDataRate@webrtc@@@std@@PEAVDataRate@2@@Z
    MCAPI bool UpdateEstimate(class webrtc::Timestamp, std::optional<class webrtc::DataRate>, class webrtc::DataRate*);

    // NOLINTEND
};

}; // namespace webrtc
