#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class XboxLiveUserObserver {
public:
    // prevent constructor by default
    XboxLiveUserObserver& operator=(XboxLiveUserObserver const&);
    XboxLiveUserObserver(XboxLiveUserObserver const&);
    XboxLiveUserObserver();

public:
    // NOLINTBEGIN
    MCVAPI ~XboxLiveUserObserver();

    // NOLINTEND
};

}; // namespace Social
