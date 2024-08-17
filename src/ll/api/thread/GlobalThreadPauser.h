#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <vector>
#include <thread>

namespace ll::thread {
class GlobalThreadPauser {
    std::vector<std::thread::id> pausedIds;

public:
    LLNDAPI GlobalThreadPauser();
    LLAPI ~GlobalThreadPauser();
};
} // namespace ll::thread
