#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct BgfxEndFrameNoWaitDiscard {
public:
    // BgfxEndFrameNoWaitDiscard inner types declare
    // clang-format off
    struct DfnwTelemetryAccumulator;
    // clang-format on

    // BgfxEndFrameNoWaitDiscard inner types define
    enum class FrameBuilderEvent : int {};

    struct DfnwTelemetryAccumulator {};
};

} // namespace mce::framebuilder
