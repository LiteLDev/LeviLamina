#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemCategory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYSTEMCATEGORY
public:
    SystemCategory& operator=(SystemCategory const&) = delete;
    SystemCategory(SystemCategory const&)            = delete;
    SystemCategory()                                 = delete;
#endif

public:
};
