#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
// clang-format on

namespace webrtc {

class RateLimiter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2e9817;
    ::ll::UntypedStorage<8, 40> mUnk74385f;
    ::ll::UntypedStorage<8, 88> mUnkb52e97;
    ::ll::UntypedStorage<8, 8>  mUnkf4354a;
    ::ll::UntypedStorage<4, 4>  mUnk6b82f1;
    // NOLINTEND

public:
    // prevent constructor by default
    RateLimiter& operator=(RateLimiter const&);
    RateLimiter(RateLimiter const&);
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RateLimiter(::webrtc::Clock* clock, int64 max_window_ms);

    MCNAPI void SetMaxRate(uint max_rate_bps);

    MCNAPI bool TryUseRate(uint64 packet_size_bytes);

    MCNAPI ~RateLimiter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock* clock, int64 max_window_ms);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
