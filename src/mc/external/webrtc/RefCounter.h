#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_impl {

class RefCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdf4279;
    // NOLINTEND

public:
    // prevent constructor by default
    RefCounter& operator=(RefCounter const&);
    RefCounter(RefCounter const&);
    RefCounter();
};

} // namespace webrtc::webrtc_impl
