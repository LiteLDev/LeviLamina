#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioProcessorInterface {
public:
    // AudioProcessorInterface inner types declare
    // clang-format off
    struct AudioProcessorStatistics;
    // clang-format on

    // AudioProcessorInterface inner types define
    struct AudioProcessorStatistics {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AudioProcessorStatistics();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
};

} // namespace webrtc
