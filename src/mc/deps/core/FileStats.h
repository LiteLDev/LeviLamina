#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILESTATS
public:
    FileStats& operator=(FileStats const&) = delete;
    FileStats(FileStats const&)            = delete;
    FileStats()                            = delete;
#endif

public:
};

}; // namespace Core
