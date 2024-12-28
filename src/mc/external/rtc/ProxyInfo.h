#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ProxyInfo {
public:
    // prevent constructor by default
    ProxyInfo& operator=(ProxyInfo const&);
    ProxyInfo(ProxyInfo const&);
    ProxyInfo();
};

} // namespace rtc
