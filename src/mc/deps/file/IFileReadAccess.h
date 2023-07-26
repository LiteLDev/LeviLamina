#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {

public:
    // prevent constructor by default
    IFileReadAccess& operator=(IFileReadAccess const&) = delete;
    IFileReadAccess(IFileReadAccess const&)            = delete;
    IFileReadAccess()                                  = delete;
};
