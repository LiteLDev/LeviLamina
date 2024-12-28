#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioDecoder {
public:
    // prevent constructor by default
    AudioDecoder& operator=(AudioDecoder const&);
    AudioDecoder(AudioDecoder const&);
    AudioDecoder();
};

} // namespace webrtc
