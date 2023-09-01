#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class XboxLiveUserObserver {
public:
    // prevent constructor by default
    XboxLiveUserObserver& operator=(XboxLiveUserObserver const&) = delete;
    XboxLiveUserObserver(XboxLiveUserObserver const&)            = delete;
    XboxLiveUserObserver()                                       = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1XboxLiveUserObserver@Social@@UEAA@XZ
    MCVAPI ~XboxLiveUserObserver();

    // NOLINTEND
};

}; // namespace Social
