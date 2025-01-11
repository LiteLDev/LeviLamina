#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace webrtc { class DataSize; }
namespace webrtc { struct PacketFeedback; }
// clang-format on

namespace webrtc {

struct InFlightBytesTracker {
public:
    // InFlightBytesTracker inner types declare
    // clang-format off
    struct NetworkRouteComparator;
    // clang-format on

    // InFlightBytesTracker inner types define
    struct NetworkRouteComparator {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator()(::rtc::NetworkRoute const&, ::rtc::NetworkRoute const&) const;
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddInFlightPacketBytes(::webrtc::PacketFeedback const&);

    MCAPI ::webrtc::DataSize GetOutstandingData(::rtc::NetworkRoute const&) const;

    MCAPI void RemoveInFlightPacketBytes(::webrtc::PacketFeedback const&);
    // NOLINTEND
};

} // namespace webrtc
