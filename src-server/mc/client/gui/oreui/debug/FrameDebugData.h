#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct FrameDebugData {
public:
    // FrameDebugData inner types declare
    // clang-format off
    struct DrawcallDebugData;
    struct SubmissionDebugData;
    // clang-format on

    // FrameDebugData inner types define
    enum class FlushTrigger : int {};

    struct DrawcallDebugData {};

    struct SubmissionDebugData {};
};

} // namespace OreUI
