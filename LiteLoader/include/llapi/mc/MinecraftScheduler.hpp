/**
 * @file  MC/MinecraftScheduler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftScheduler.
 *
 */
class MinecraftScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCHEDULER
public:
    class MinecraftScheduler& operator=(class MinecraftScheduler const &) = delete;
    MinecraftScheduler(class MinecraftScheduler const &) = delete;
    MinecraftScheduler() = delete;
#endif

public:
    /**
     * @hash   -2117538528
     * @symbol ?client@MinecraftScheduler@@SAAEAVScheduler@@XZ
     */
    MCAPI static class Scheduler & client();
    /**
     * @hash   -905031661
     * @symbol ?destroyClientSingleton@MinecraftScheduler@@SAXXZ
     */
    MCAPI static void destroyClientSingleton();

//private:

private:
    /**
     * @hash   784312009
     * @symbol ?mInstance@MinecraftScheduler@@0V?$unique_ptr@VScheduler@@U?$default_delete@VScheduler@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class Scheduler> mInstance;

};