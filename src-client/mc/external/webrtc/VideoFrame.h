#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoFrame {
public:
    // VideoFrame inner types declare
    // clang-format off
    struct Builder;
    struct ProcessingTime;
    struct RenderParameters;
    struct UpdateRect;
    // clang-format on

    // VideoFrame inner types define
    struct Builder {};

    struct ProcessingTime {};

    struct RenderParameters {};

    struct UpdateRect {};
};

} // namespace webrtc
