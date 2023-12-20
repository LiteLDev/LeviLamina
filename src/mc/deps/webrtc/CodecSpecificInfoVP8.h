#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfoVP8 {
public:
    // prevent constructor by default
    CodecSpecificInfoVP8& operator=(CodecSpecificInfoVP8 const&);
    CodecSpecificInfoVP8(CodecSpecificInfoVP8 const&);
    CodecSpecificInfoVP8();
};

}; // namespace webrtc
