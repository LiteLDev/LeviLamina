#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogEvent {
public:
    // prevent constructor by default
    WatchdogEvent& operator=(WatchdogEvent const&);
    WatchdogEvent(WatchdogEvent const&);
    WatchdogEvent();
};

}; // namespace Scripting
