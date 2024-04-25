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
    // symbol: ?client@MinecraftScheduler@@SAAEAVScheduler@@XZ
    MCAPI static class Scheduler& client();

    // symbol: ?destroyClientSingleton@MinecraftScheduler@@SAXXZ
    MCAPI static void destroyClientSingleton();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mInstance@MinecraftScheduler@@0V?$unique_ptr@VScheduler@@U?$default_delete@VScheduler@@@std@@@std@@A
    MCAPI static std::unique_ptr<class Scheduler> mInstance;

    // NOLINTEND
};
