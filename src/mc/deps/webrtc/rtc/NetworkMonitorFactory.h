#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class NetworkMonitorFactory {
public:
    // prevent constructor by default
    NetworkMonitorFactory& operator=(NetworkMonitorFactory const&);
    NetworkMonitorFactory(NetworkMonitorFactory const&);
    NetworkMonitorFactory();
};

}; // namespace rtc
