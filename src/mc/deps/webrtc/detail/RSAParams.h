#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct RSAParams {
public:
    // prevent constructor by default
    RSAParams& operator=(RSAParams const&);
    RSAParams(RSAParams const&);
    RSAParams();
};

}; // namespace rtc
