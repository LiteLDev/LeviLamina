/**
 * @file  MinecraftGameTestBatchRunner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "gametest.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTestBatchRunner.
 *
 */
class MinecraftGameTestBatchRunner {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTBATCHRUNNER
public:
    class MinecraftGameTestBatchRunner& operator=(class MinecraftGameTestBatchRunner const &) = delete;
    MinecraftGameTestBatchRunner(class MinecraftGameTestBatchRunner const &) = delete;
    MinecraftGameTestBatchRunner() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_createGameTestInstance\@MinecraftGameTestBatchRunner\@\@MEAA?AV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVBaseGameTestFunction\@gametest\@\@\@Z
     */
    virtual class std::shared_ptr<class gametest::BaseGameTestInstance> _createGameTestInstance(class gametest::BaseGameTestFunction &);
    /**
     * @vftbl 2
     * @symbol ?_runTest\@MinecraftGameTestBatchRunner\@\@MEAAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    virtual void _runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker &);

};
