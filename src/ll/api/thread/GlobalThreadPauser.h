#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <vector>

namespace ll::thread {
class GlobalThreadPauser {
    std::vector<uint> pausedIds;

public:
    LLNDAPI GlobalThreadPauser();
    LLAPI ~GlobalThreadPauser();
};
} // namespace ll::thread
