#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
// clang-format on

namespace webrtc {

class RateLimiter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RateLimiter(::webrtc::Clock*, int64);

    MCAPI void SetMaxRate(uint);

    MCAPI bool TryUseRate(uint64);

    MCAPI ~RateLimiter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::Clock*, int64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
