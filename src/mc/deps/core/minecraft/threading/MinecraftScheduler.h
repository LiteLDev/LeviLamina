#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftScheduler {
public:
    // prevent constructor by default
    MinecraftScheduler& operator=(MinecraftScheduler const&);
    MinecraftScheduler(MinecraftScheduler const&);
    MinecraftScheduler();

public:
    // NOLINTBEGIN
    MCAPI static class Scheduler& client();

    MCAPI static void destroyClientSingleton();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class Scheduler>& mInstance();

    // NOLINTEND
};
