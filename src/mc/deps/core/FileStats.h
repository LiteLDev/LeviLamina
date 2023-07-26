#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {

public:
    // prevent constructor by default
    FileStats& operator=(FileStats const&) = delete;
    FileStats(FileStats const&)            = delete;
    FileStats()                            = delete;
};

}; // namespace Core
