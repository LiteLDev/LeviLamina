#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class JitterBufferDelay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk209432;
    ::ll::UntypedStorage<8, 16> mUnk55a788;
    // NOLINTEND

public:
    // prevent constructor by default
    JitterBufferDelay& operator=(JitterBufferDelay const&);
    JitterBufferDelay(JitterBufferDelay const&);
    JitterBufferDelay();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int GetMs() const;

    MCNAPI void Set(::std::optional<double> delay_seconds);
    // NOLINTEND

};

}
