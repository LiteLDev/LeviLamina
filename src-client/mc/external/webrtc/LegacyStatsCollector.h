#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LegacyStatsCollector {
public:
    // LegacyStatsCollector inner types declare
    // clang-format off
    struct SessionStats;
    struct TransportStats;
    // clang-format on

    // LegacyStatsCollector inner types define
    struct SessionStats {};

    struct TransportStats {};
};

} // namespace webrtc
