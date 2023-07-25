#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class IFileSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_IFILESYSTEM
public:
    IFileSystem& operator=(IFileSystem const&) = delete;
    IFileSystem(IFileSystem const&)            = delete;
    IFileSystem()                              = delete;
#endif

public:
};

}; // namespace Core
