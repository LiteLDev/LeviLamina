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
    // member functions
    // NOLINTBEGIN
    MCNAPI LinkCapacityTracker();

    MCNAPI void OnRateUpdate(::std::optional<::webrtc::DataRate>, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void OnRttBackoff(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void OnStartingRate(::webrtc::DataRate);

    MCNAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCNAPI ::webrtc::DataRate estimate() const;

    MCNAPI ~LinkCapacityTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
