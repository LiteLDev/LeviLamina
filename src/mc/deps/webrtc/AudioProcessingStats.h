#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AudioProcessingStats {
public:
    // prevent constructor by default
    AudioProcessingStats& operator=(AudioProcessingStats const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AudioProcessingStats@webrtc@@QEAA@XZ
    MCAPI AudioProcessingStats();

    // symbol: ??0AudioProcessingStats@webrtc@@QEAA@AEBU01@@Z
    MCAPI AudioProcessingStats(struct webrtc::AudioProcessingStats const&);

    // symbol: ??1AudioProcessingStats@webrtc@@QEAA@XZ
    MCAPI ~AudioProcessingStats();

    // NOLINTEND
};

}; // namespace webrtc
