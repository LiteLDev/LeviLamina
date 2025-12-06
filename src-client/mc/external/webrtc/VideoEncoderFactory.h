#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoEncoderFactory {
public:
    // VideoEncoderFactory inner types declare
    // clang-format off
    struct CodecSupport;
    struct EncoderSelectorInterface;
    // clang-format on

    // VideoEncoderFactory inner types define
    struct CodecSupport {};

    struct EncoderSelectorInterface {};
};

} // namespace webrtc
