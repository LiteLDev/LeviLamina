#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueuePortObject {

public:
    // prevent constructor by default
    XTaskQueuePortObject& operator=(XTaskQueuePortObject const&) = delete;
    XTaskQueuePortObject(XTaskQueuePortObject const&)            = delete;
    XTaskQueuePortObject()                                       = delete;
};
