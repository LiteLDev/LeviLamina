#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBackgroundTaskOwner {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IBACKGROUNDTASKOWNER
public:
    IBackgroundTaskOwner& operator=(IBackgroundTaskOwner const&) = delete;
    IBackgroundTaskOwner(IBackgroundTaskOwner const&)            = delete;
    IBackgroundTaskOwner()                                       = delete;
#endif

public:
};
