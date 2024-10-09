#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogSettings {
public:
    // prevent constructor by default
    WatchdogSettings& operator=(WatchdogSettings const&);
    WatchdogSettings(WatchdogSettings const&);
    WatchdogSettings();
};

}; // namespace Scripting
