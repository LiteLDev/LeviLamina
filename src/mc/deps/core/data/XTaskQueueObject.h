#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XTASKQUEUEOBJECT
public:
    XTaskQueueObject& operator=(XTaskQueueObject const&) = delete;
    XTaskQueueObject(XTaskQueueObject const&)            = delete;
    XTaskQueueObject()                                   = delete;
#endif

public:
};
