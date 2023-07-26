#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class IFileSystem {

public:
    // prevent constructor by default
    IFileSystem& operator=(IFileSystem const&) = delete;
    IFileSystem(IFileSystem const&)            = delete;
    IFileSystem()                              = delete;
};

}; // namespace Core
