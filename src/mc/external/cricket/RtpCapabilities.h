#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct RtpCapabilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf07afd;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpCapabilities& operator=(RtpCapabilities const&);
    RtpCapabilities(RtpCapabilities const&);
    RtpCapabilities();
};

} // namespace cricket
