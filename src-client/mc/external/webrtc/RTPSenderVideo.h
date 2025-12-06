#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPSenderVideo {
public:
    // RTPSenderVideo inner types declare
    // clang-format off
    struct Config;
    struct TemporalLayerStats;
    // clang-format on

    // RTPSenderVideo inner types define
    enum class SendVideoLayersAllocation : uint {};

    struct Config {};

    struct TemporalLayerStats {};
};

} // namespace webrtc
