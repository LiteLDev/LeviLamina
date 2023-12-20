#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RouteEndpoint {
public:
    // prevent constructor by default
    RouteEndpoint& operator=(RouteEndpoint const&);
    RouteEndpoint(RouteEndpoint const&);
    RouteEndpoint();

public:
    // NOLINTBEGIN
    // symbol: ??8RouteEndpoint@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class rtc::RouteEndpoint const&) const;

    // NOLINTEND
};

}; // namespace rtc
