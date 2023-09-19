#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // prevent constructor by default
    FileStats& operator=(FileStats const&);
    FileStats(FileStats const&);
    FileStats();
};

}; // namespace Core
