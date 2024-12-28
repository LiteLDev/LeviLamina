#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpFecParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk59c57a;
    ::ll::UntypedStorage<4, 4> mUnk6c5d52;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpFecParameters& operator=(RtpFecParameters const&);
    RtpFecParameters(RtpFecParameters const&);
    RtpFecParameters();
};

} // namespace webrtc
