#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
// clang-format on

namespace webrtc {

class RateLimiter {
public:
    // prevent constructor by default
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RateLimiter(::webrtc::Clock*, int64);

    MCNAPI void SetMaxRate(uint);

    MCNAPI bool TryUseRate(uint64);

    MCNAPI ~RateLimiter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock*, int64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
