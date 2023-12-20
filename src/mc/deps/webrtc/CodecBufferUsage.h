#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecBufferUsage {
public:
    // prevent constructor by default
    CodecBufferUsage& operator=(CodecBufferUsage const&);
    CodecBufferUsage(CodecBufferUsage const&);
    CodecBufferUsage();
};

}; // namespace webrtc
