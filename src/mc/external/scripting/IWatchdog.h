#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IWatchdog {
public:
    // prevent constructor by default
    IWatchdog& operator=(IWatchdog const&);
    IWatchdog(IWatchdog const&);
    IWatchdog();
};

}; // namespace Scripting
