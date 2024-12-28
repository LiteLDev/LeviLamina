#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

struct LinkCapacityTracker {
public:
    // prevent constructor by default
    LinkCapacityTracker& operator=(LinkCapacityTracker const&);
    LinkCapacityTracker(LinkCapacityTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LinkCapacityTracker();

    MCAPI void OnRateUpdate(::std::optional<::webrtc::DataRate>, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void OnRttBackoff(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void OnStartingRate(::webrtc::DataRate);

    MCAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCAPI ::webrtc::DataRate estimate() const;

    MCAPI ~LinkCapacityTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
