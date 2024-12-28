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
        // prevent constructor by default
        NetworkRouteComparator& operator=(NetworkRouteComparator const&);
        NetworkRouteComparator(NetworkRouteComparator const&);
        NetworkRouteComparator();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator()(::rtc::NetworkRoute const&, ::rtc::NetworkRoute const&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    InFlightBytesTracker& operator=(InFlightBytesTracker const&);
    InFlightBytesTracker(InFlightBytesTracker const&);
    InFlightBytesTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddInFlightPacketBytes(::webrtc::PacketFeedback const&);

    MCAPI ::webrtc::DataSize GetOutstandingData(::rtc::NetworkRoute const&) const;

    MCAPI void RemoveInFlightPacketBytes(::webrtc::PacketFeedback const&);
    // NOLINTEND
};

} // namespace webrtc
