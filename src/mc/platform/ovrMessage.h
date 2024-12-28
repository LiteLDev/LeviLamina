#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ovrMessage {
public:
    // prevent constructor by default
    ovrMessage& operator=(ovrMessage const&);
    ovrMessage(ovrMessage const&);
    ovrMessage();
};
