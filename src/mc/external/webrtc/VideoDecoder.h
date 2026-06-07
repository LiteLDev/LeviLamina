#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoDecoder {
public:
    // VideoDecoder inner types declare
    // clang-format off
    struct DecoderInfo;
    // clang-format on

    // VideoDecoder inner types define
    struct DecoderInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk543411;
        ::ll::UntypedStorage<1, 1>  mUnkd8f66f;
        // NOLINTEND

    public:
        // prevent constructor by default
        DecoderInfo& operator=(DecoderInfo const&);
        DecoderInfo(DecoderInfo const&);
        DecoderInfo();
    };
};

} // namespace webrtc
