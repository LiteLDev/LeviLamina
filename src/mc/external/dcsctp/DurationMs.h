#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class DurationMs {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DurationMs(::webrtc::TimeDelta);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace dcsctp
