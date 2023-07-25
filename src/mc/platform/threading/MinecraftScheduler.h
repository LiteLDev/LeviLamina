#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftScheduler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCHEDULER
public:
    MinecraftScheduler& operator=(MinecraftScheduler const&) = delete;
    MinecraftScheduler(MinecraftScheduler const&)            = delete;
    MinecraftScheduler()                                     = delete;
#endif

public:
    /**
     * @symbol ?client\@MinecraftScheduler\@\@SAAEAVScheduler\@\@XZ
     */
    MCAPI static class Scheduler& client();
    /**
     * @symbol ?destroyClientSingleton\@MinecraftScheduler\@\@SAXXZ
     */
    MCAPI static void destroyClientSingleton();

    // private:

private:
    /**
     * @symbol
     * ?mInstance\@MinecraftScheduler\@\@0V?$unique_ptr\@VScheduler\@\@U?$default_delete\@VScheduler\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class Scheduler> mInstance;
};
