#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace webrtc { class DataSize; }
namespace webrtc { struct PacketFeedback; }
// clang-format on

namespace webrtc {

class InFlightBytesTracker {
public:
    // InFlightBytesTracker inner types declare
    // clang-format off
    class NetworkRouteComparator;
    // clang-format on

    // InFlightBytesTracker inner types define
    class NetworkRouteComparator {
    public:
        // prevent constructor by default
        NetworkRouteComparator& operator=(NetworkRouteComparator const&);
        NetworkRouteComparator(NetworkRouteComparator const&);
        NetworkRouteComparator();

    public:
        // NOLINTBEGIN
        // symbol: ??RNetworkRouteComparator@InFlightBytesTracker@webrtc@@QEBA_NAEBUNetworkRoute@rtc@@0@Z
        MCAPI bool operator()(struct rtc::NetworkRoute const&, struct rtc::NetworkRoute const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    InFlightBytesTracker& operator=(InFlightBytesTracker const&);
    InFlightBytesTracker(InFlightBytesTracker const&);
    InFlightBytesTracker();

public:
    // NOLINTBEGIN
    // symbol: ?AddInFlightPacketBytes@InFlightBytesTracker@webrtc@@QEAAXAEBUPacketFeedback@2@@Z
    MCAPI void AddInFlightPacketBytes(struct webrtc::PacketFeedback const&);

    // symbol: ?GetOutstandingData@InFlightBytesTracker@webrtc@@QEBA?AVDataSize@2@AEBUNetworkRoute@rtc@@@Z
    MCAPI class webrtc::DataSize GetOutstandingData(struct rtc::NetworkRoute const&) const;

    // symbol: ?RemoveInFlightPacketBytes@InFlightBytesTracker@webrtc@@QEAAXAEBUPacketFeedback@2@@Z
    MCAPI void RemoveInFlightPacketBytes(struct webrtc::PacketFeedback const&);

    // NOLINTEND
};

}; // namespace webrtc
