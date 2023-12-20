#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkRouteChange {
public:
    // prevent constructor by default
    NetworkRouteChange& operator=(NetworkRouteChange const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NetworkRouteChange@webrtc@@QEAA@XZ
    MCAPI NetworkRouteChange();

    // symbol: ??0NetworkRouteChange@webrtc@@QEAA@AEBU01@@Z
    MCAPI NetworkRouteChange(struct webrtc::NetworkRouteChange const&);

    // symbol: ??1NetworkRouteChange@webrtc@@QEAA@XZ
    MCAPI ~NetworkRouteChange();

    // NOLINTEND
};

}; // namespace webrtc
