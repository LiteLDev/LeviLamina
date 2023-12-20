#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioProcessorInterface {
public:
    // AudioProcessorInterface inner types declare
    // clang-format off
    class AudioProcessorStatistics;
    // clang-format on

    // AudioProcessorInterface inner types define
    class AudioProcessorStatistics {
    public:
        // prevent constructor by default
        AudioProcessorStatistics& operator=(AudioProcessorStatistics const&);
        AudioProcessorStatistics(AudioProcessorStatistics const&);
        AudioProcessorStatistics();

    public:
        // NOLINTBEGIN
        // symbol: ??1AudioProcessorStatistics@AudioProcessorInterface@webrtc@@QEAA@XZ
        MCAPI ~AudioProcessorStatistics();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AudioProcessorInterface& operator=(AudioProcessorInterface const&);
    AudioProcessorInterface(AudioProcessorInterface const&);
    AudioProcessorInterface();
};

}; // namespace webrtc
