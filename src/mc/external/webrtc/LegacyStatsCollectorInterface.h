#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LegacyStatsCollectorInterface {
public:
    // prevent constructor by default
    LegacyStatsCollectorInterface& operator=(LegacyStatsCollectorInterface const&);
    LegacyStatsCollectorInterface(LegacyStatsCollectorInterface const&);
    LegacyStatsCollectorInterface();
};

} // namespace webrtc
