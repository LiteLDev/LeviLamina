#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { struct TargetTransferRate; }
// clang-format on

namespace webrtc {

class CongestionControlHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnke5dece;
    ::ll::UntypedStorage<8, 80> mUnkaa1b40;
    ::ll::UntypedStorage<1, 1> mUnk42e9c0;
    ::ll::UntypedStorage<1, 1> mUnk9786bc;
    ::ll::UntypedStorage<8, 8> mUnk8ff9ea;
    ::ll::UntypedStorage<1, 1> mUnkcf6552;
    // NOLINTEND

public:
    // prevent constructor by default
    CongestionControlHandler& operator=(CongestionControlHandler const&);
    CongestionControlHandler(CongestionControlHandler const&);
    CongestionControlHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::TargetTransferRate> GetUpdate();

    MCNAPI void SetNetworkAvailability(bool network_available);

    MCNAPI void SetPacerQueue(::webrtc::TimeDelta expected_queue_time);

    MCNAPI void SetTargetRate(::webrtc::TargetTransferRate new_target_rate);
    // NOLINTEND

};

}
