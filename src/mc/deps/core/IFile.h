#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class IFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_IFILE
public:
    IFile& operator=(IFile const&) = delete;
    IFile(IFile const&)            = delete;
    IFile()                        = delete;
#endif

public:
};

}; // namespace Core
