#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class IFile {

public:
    // prevent constructor by default
    IFile& operator=(IFile const&) = delete;
    IFile(IFile const&)            = delete;
    IFile()                        = delete;
};

}; // namespace Core
