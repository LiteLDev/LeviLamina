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
    struct NetworkRouteComparator;
    // clang-format on

    // InFlightBytesTracker inner types define
    struct NetworkRouteComparator {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(::rtc::NetworkRoute const& a, ::rtc::NetworkRoute const& b) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb99a01;
    // NOLINTEND

public:
    // prevent constructor by default
    InFlightBytesTracker& operator=(InFlightBytesTracker const&);
    InFlightBytesTracker(InFlightBytesTracker const&);
    InFlightBytesTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddInFlightPacketBytes(::webrtc::PacketFeedback const& packet);

    MCNAPI ::webrtc::DataSize GetOutstandingData(::rtc::NetworkRoute const& network_route) const;

    MCNAPI void RemoveInFlightPacketBytes(::webrtc::PacketFeedback const& packet);
    // NOLINTEND
};

} // namespace webrtc
