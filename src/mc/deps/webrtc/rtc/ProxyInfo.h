#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ProxyInfo {
public:
    // prevent constructor by default
    ProxyInfo& operator=(ProxyInfo const&);
    ProxyInfo(ProxyInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ProxyInfo@rtc@@QEAA@XZ
    MCAPI ProxyInfo();

    // symbol: ??1ProxyInfo@rtc@@QEAA@XZ
    MCAPI ~ProxyInfo();

    // NOLINTEND
};

}; // namespace rtc
