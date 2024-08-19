#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <thread>
#include <vector>

namespace ll::thread {
class GlobalThreadPauser {
    std::vector<std::thread::id> pausedIds;

public:
    LLNDAPI GlobalThreadPauser();
    LLAPI ~GlobalThreadPauser();
};
} // namespace ll::thread
