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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk374897;
    ::ll::UntypedStorage<8, 8> mUnk288b2e;
    ::ll::UntypedStorage<8, 8> mUnked489c;
    ::ll::UntypedStorage<8, 8> mUnkab965b;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkCapacityTracker& operator=(LinkCapacityTracker const&);
    LinkCapacityTracker(LinkCapacityTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LinkCapacityTracker();

    MCNAPI void OnRateUpdate(::std::optional<::webrtc::DataRate> acknowledged, ::webrtc::DataRate target, ::webrtc::Timestamp at_time);

    MCNAPI void OnRttBackoff(::webrtc::DataRate backoff_rate, ::webrtc::Timestamp at_time);

    MCNAPI void OnStartingRate(::webrtc::DataRate start_rate);

    MCNAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp at_time, ::webrtc::DataRate delay_based_bitrate);

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

}
