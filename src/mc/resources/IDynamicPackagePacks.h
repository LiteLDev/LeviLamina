#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDynamicPackagePacks {

public:
    // prevent constructor by default
    IDynamicPackagePacks& operator=(IDynamicPackagePacks const&) = delete;
    IDynamicPackagePacks(IDynamicPackagePacks const&)            = delete;
    IDynamicPackagePacks()                                       = delete;
};
