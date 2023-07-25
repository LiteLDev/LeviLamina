#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEREADACCESS
public:
    IFileReadAccess& operator=(IFileReadAccess const&) = delete;
    IFileReadAccess(IFileReadAccess const&)            = delete;
    IFileReadAccess()                                  = delete;
#endif

public:
};
