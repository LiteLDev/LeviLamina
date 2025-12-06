#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoEncoder {
public:
    // VideoEncoder inner types declare
    // clang-format off
    struct Capabilities;
    struct EncoderInfo;
    struct LossNotification;
    struct QpThresholds;
    struct RateControlParameters;
    struct ResolutionBitrateLimits;
    struct ScalingSettings;
    struct Settings;
    // clang-format on

    // VideoEncoder inner types define
    struct Capabilities {};

    struct EncoderInfo {};

    struct LossNotification {};

    struct QpThresholds {};

    struct RateControlParameters {};

    struct ResolutionBitrateLimits {};

    struct ScalingSettings {
    public:
        // ScalingSettings inner types declare
        // clang-format off
        struct KOff;
        // clang-format on

        // ScalingSettings inner types define
        struct KOff {};
    };

    struct Settings {};
};

} // namespace webrtc
