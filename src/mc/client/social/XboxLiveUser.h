#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class XboxLiveUser {
public:
    // prevent constructor by default
    XboxLiveUser& operator=(XboxLiveUser const&);
    XboxLiveUser(XboxLiveUser const&);
    XboxLiveUser();
};

} // namespace Social
