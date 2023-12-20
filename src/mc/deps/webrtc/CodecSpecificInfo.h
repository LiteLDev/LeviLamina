#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfo {
public:
    // prevent constructor by default
    CodecSpecificInfo& operator=(CodecSpecificInfo const&);
    CodecSpecificInfo(CodecSpecificInfo const&);
    CodecSpecificInfo();
};

}; // namespace webrtc
