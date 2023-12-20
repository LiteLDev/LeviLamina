#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class LinkCapacityTracker {
public:
    // prevent constructor by default
    LinkCapacityTracker& operator=(LinkCapacityTracker const&);
    LinkCapacityTracker(LinkCapacityTracker const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LinkCapacityTracker@webrtc@@QEAA@XZ
    MCAPI LinkCapacityTracker();

    // symbol:
    // ?OnRateUpdate@LinkCapacityTracker@webrtc@@QEAAXV?$optional@VDataRate@webrtc@@@std@@VDataRate@2@VTimestamp@2@@Z
    MCAPI void OnRateUpdate(std::optional<class webrtc::DataRate>, class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?OnRttBackoff@LinkCapacityTracker@webrtc@@QEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void OnRttBackoff(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?OnStartingRate@LinkCapacityTracker@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void OnStartingRate(class webrtc::DataRate);

    // symbol: ?UpdateDelayBasedEstimate@LinkCapacityTracker@webrtc@@QEAAXVTimestamp@2@VDataRate@2@@Z
    MCAPI void UpdateDelayBasedEstimate(class webrtc::Timestamp, class webrtc::DataRate);

    // symbol: ?estimate@LinkCapacityTracker@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate estimate() const;

    // symbol: ??1LinkCapacityTracker@webrtc@@QEAA@XZ
    MCAPI ~LinkCapacityTracker();

    // NOLINTEND
};

}; // namespace webrtc
