#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueObject {
public:
    // prevent constructor by default
    XTaskQueueObject& operator=(XTaskQueueObject const&);
    XTaskQueueObject(XTaskQueueObject const&);
    XTaskQueueObject();
};
