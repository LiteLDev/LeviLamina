#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {

public:
    // prevent constructor by default
    IFileWriteAccess& operator=(IFileWriteAccess const&) = delete;
    IFileWriteAccess(IFileWriteAccess const&)            = delete;
    IFileWriteAccess()                                   = delete;
};
