#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLIdentityParams {
public:
    // prevent constructor by default
    SSLIdentityParams& operator=(SSLIdentityParams const&);
    SSLIdentityParams(SSLIdentityParams const&);
    SSLIdentityParams();

public:
    // NOLINTBEGIN
    // symbol: ??1SSLIdentityParams@rtc@@QEAA@XZ
    MCAPI ~SSLIdentityParams();

    // NOLINTEND
};

}; // namespace rtc
