#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace cricket {

struct IceParameters {
public:
    // prevent constructor by default
    IceParameters& operator=(IceParameters const&);
    IceParameters(IceParameters const&);
    IceParameters();

public:
    // NOLINTBEGIN
    // symbol: ?Validate@IceParameters@cricket@@QEBA?AVRTCError@webrtc@@XZ
    MCAPI class webrtc::RTCError Validate() const;

    // symbol: ??1IceParameters@cricket@@QEAA@XZ
    MCAPI ~IceParameters();

    // NOLINTEND
};

}; // namespace cricket
