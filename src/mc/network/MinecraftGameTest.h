#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::BlockSourceListener {

public:
    // prevent constructor by default
    MinecraftGameTest& operator=(MinecraftGameTest const&) = delete;
    MinecraftGameTest(MinecraftGameTest const&)            = delete;
    MinecraftGameTest()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 23
     * @symbol
     * ?onLevelDestruction\@MinecraftGameTest\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void onLevelDestruction(std::string const&);
    /**
     * @symbol ??0MinecraftGameTest\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI MinecraftGameTest(class Level&);
    /**
     * @symbol ?clearAllTests\@MinecraftGameTest\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void clearAllTests(class BlockSource&);
    /**
     * @symbol ?getRegistry\@MinecraftGameTest\@\@QEAAAEAVGameTestRegistry\@gametest\@\@XZ
     */
    MCAPI class gametest::GameTestRegistry& getRegistry();
    /**
     * @symbol ?getTicker\@MinecraftGameTest\@\@QEAAAEAVGameTestTicker\@gametest\@\@XZ
     */
    MCAPI class gametest::GameTestTicker& getTicker();
    /**
     * @symbol ?loadExistingTests\@MinecraftGameTest\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void loadExistingTests(class Level&);
    /**
     * @symbol ?registerDefaultGameBatches\@MinecraftGameTest\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void registerDefaultGameBatches(class Level&);
    /**
     * @symbol ?registerNativeGameTests\@MinecraftGameTest\@\@QEAAXXZ
     */
    MCAPI void registerNativeGameTests();
    /**
     * @symbol
     * ?runTest\@MinecraftGameTest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEAVDimension\@\@AEBUTestParameters\@gametest\@\@V?$vector\@V?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::string
    runTest(std::string const&, class Dimension&, struct gametest::TestParameters const&, std::vector<std::shared_ptr<class gametest::IGameTestListener>>);
    /**
     * @symbol
     * ?runTest\@MinecraftGameTest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEAVDimension\@\@AEBUTestParameters\@gametest\@\@\@Z
     */
    MCAPI std::string runTest(std::string const&, class Dimension&, struct gametest::TestParameters const&);
    /**
     * @symbol
     * ?runTestAt\@MinecraftGameTest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@V?$optional\@W4Rotation\@\@\@3\@\@Z
     */
    MCAPI std::string runTestAt(class BlockSource&, class BlockPos const&, std::optional<enum class Rotation>);
    /**
     * @symbol
     * ?runTests\@MinecraftGameTest\@\@QEAAAEBV?$vector\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@2\@\@std\@\@AEAVDimension\@\@$$QEAUTestParameters\@gametest\@\@\@Z
     */
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>> const&
          runTests(class Dimension&, struct gametest::TestParameters&&);
    /**
     * @symbol ?stopAllTests\@MinecraftGameTest\@\@QEAAXXZ
     */
    MCAPI void stopAllTests();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_runTestPreparation\@MinecraftGameTest\@\@AEAAXAEBVBaseGameTestFunction\@gametest\@\@\@Z
     */
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const&);
    // NOLINTEND
};
