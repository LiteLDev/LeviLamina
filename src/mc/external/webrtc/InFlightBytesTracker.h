#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    struct NetworkRouteComparator {};

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
    MCNAPI void RemoveInFlightPacketBytes(::webrtc::PacketFeedback const& packet);
    // NOLINTEND
};

} // namespace webrtc
