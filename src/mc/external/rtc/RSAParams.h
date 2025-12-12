#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct RSAParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3e64a1;
    ::ll::UntypedStorage<4, 4> mUnk2c34b7;
    // NOLINTEND

public:
    // prevent constructor by default
    RSAParams& operator=(RSAParams const&);
    RSAParams(RSAParams const&);
    RSAParams();
};

} // namespace rtc
