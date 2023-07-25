#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEWRITEACCESS
public:
    IFileWriteAccess& operator=(IFileWriteAccess const&) = delete;
    IFileWriteAccess(IFileWriteAccess const&)            = delete;
    IFileWriteAccess()                                   = delete;
#endif

public:
};
