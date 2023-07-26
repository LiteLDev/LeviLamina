#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueObject {

public:
    // prevent constructor by default
    XTaskQueueObject& operator=(XTaskQueueObject const&) = delete;
    XTaskQueueObject(XTaskQueueObject const&)            = delete;
    XTaskQueueObject()                                   = delete;
};
