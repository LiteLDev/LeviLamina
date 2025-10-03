#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct RtcpParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3d9eb2;
    ::ll::UntypedStorage<1, 1> mUnk3c4d3b;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpParameters& operator=(RtcpParameters const&);
    RtcpParameters(RtcpParameters const&);
    RtcpParameters();
};

} // namespace cricket
