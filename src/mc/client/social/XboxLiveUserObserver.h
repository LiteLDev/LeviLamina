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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_XBOXLIVEUSEROBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~XboxLiveUserObserver();
#endif
    // NOLINTEND
};

}; // namespace Social
