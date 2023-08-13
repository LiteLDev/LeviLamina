#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestBatchRunner.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
// clang-format on

class MinecraftGameTestBatchRunner : public ::gametest::BaseGameTestBatchRunner {

public:
    // prevent constructor by default
    MinecraftGameTestBatchRunner& operator=(MinecraftGameTestBatchRunner const&) = delete;
    MinecraftGameTestBatchRunner(MinecraftGameTestBatchRunner const&)            = delete;
    MinecraftGameTestBatchRunner()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_createGameTestInstance\@MinecraftGameTestBatchRunner\@\@MEAA?AV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVBaseGameTestFunction\@gametest\@\@\@Z
     */
    virtual std::shared_ptr<class gametest::BaseGameTestInstance>
    _createGameTestInstance(class gametest::BaseGameTestFunction&);
    /**
     * @vftbl 2
     * @symbol
     * ?_runTest\@MinecraftGameTestBatchRunner\@\@MEAAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    virtual void _runTest(std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker&);
    // NOLINTEND
};
