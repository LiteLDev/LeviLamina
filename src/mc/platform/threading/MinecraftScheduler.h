#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftScheduler {

public:
    // prevent constructor by default
    MinecraftScheduler& operator=(MinecraftScheduler const&) = delete;
    MinecraftScheduler(MinecraftScheduler const&)            = delete;
    MinecraftScheduler()                                     = delete;

public:
    /**
     * @symbol ?client\@MinecraftScheduler\@\@SAAEAVScheduler\@\@XZ
     */
    MCAPI static class Scheduler& client(); // NOLINT
    /**
     * @symbol ?destroyClientSingleton\@MinecraftScheduler\@\@SAXXZ
     */
    MCAPI static void destroyClientSingleton(); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mInstance\@MinecraftScheduler\@\@0V?$unique_ptr\@VScheduler\@\@U?$default_delete\@VScheduler\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class Scheduler> mInstance; // NOLINT
};
