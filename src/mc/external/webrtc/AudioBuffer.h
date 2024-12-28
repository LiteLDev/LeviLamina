#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioBuffer {
public:
    // prevent constructor by default
    AudioBuffer& operator=(AudioBuffer const&);
    AudioBuffer(AudioBuffer const&);
    AudioBuffer();
};

} // namespace webrtc
