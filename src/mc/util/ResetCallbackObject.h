#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetCallbackObject {
public:
    // prevent constructor by default
    ResetCallbackObject& operator=(ResetCallbackObject const&);
    ResetCallbackObject(ResetCallbackObject const&);
    ResetCallbackObject();
};
