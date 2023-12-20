#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfoVP9 {
public:
    // prevent constructor by default
    CodecSpecificInfoVP9& operator=(CodecSpecificInfoVP9 const&);
    CodecSpecificInfoVP9(CodecSpecificInfoVP9 const&);
    CodecSpecificInfoVP9();
};

}; // namespace webrtc
