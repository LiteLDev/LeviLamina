#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfoH264 {
public:
    // prevent constructor by default
    CodecSpecificInfoH264& operator=(CodecSpecificInfoH264 const&);
    CodecSpecificInfoH264(CodecSpecificInfoH264 const&);
    CodecSpecificInfoH264();
};

}; // namespace webrtc
