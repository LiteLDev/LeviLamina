#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class XboxLiveUserObserver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_XBOXLIVEUSEROBSERVER
public:
    XboxLiveUserObserver& operator=(XboxLiveUserObserver const&) = delete;
    XboxLiveUserObserver(XboxLiveUserObserver const&)            = delete;
    XboxLiveUserObserver()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_XBOXLIVEUSEROBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~XboxLiveUserObserver();
#endif
};

}; // namespace Social
