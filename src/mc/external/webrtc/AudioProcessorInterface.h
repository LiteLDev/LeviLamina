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
        // prevent constructor by default
        AudioProcessorStatistics& operator=(AudioProcessorStatistics const&);
        AudioProcessorStatistics(AudioProcessorStatistics const&);
        AudioProcessorStatistics();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AudioProcessorStatistics();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    AudioProcessorInterface& operator=(AudioProcessorInterface const&);
    AudioProcessorInterface(AudioProcessorInterface const&);
    AudioProcessorInterface();
};

} // namespace webrtc
