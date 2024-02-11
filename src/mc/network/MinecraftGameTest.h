#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/enums/Rotation.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::LevelListener {
public:
    // prevent constructor by default
    MinecraftGameTest& operator=(MinecraftGameTest const&);
    MinecraftGameTest(MinecraftGameTest const&);
    MinecraftGameTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecraftGameTest@@UEAA@XZ
    virtual ~MinecraftGameTest() = default;

    // vIndex: 23, symbol:
    // ?onLevelDestruction@MinecraftGameTest@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onLevelDestruction(std::string const&);

    // symbol: ??0MinecraftGameTest@@QEAA@AEAVLevel@@@Z
    MCAPI explicit MinecraftGameTest(class Level& level);

    // symbol: ?clearAllTests@MinecraftGameTest@@QEAAXAEAVBlockSource@@@Z
    MCAPI void clearAllTests(class BlockSource& region);

    // symbol: ?getRegistry@MinecraftGameTest@@QEAAAEAVGameTestRegistry@gametest@@XZ
    MCAPI class gametest::GameTestRegistry& getRegistry();

    // symbol: ?getTicker@MinecraftGameTest@@QEAAAEAVGameTestTicker@gametest@@XZ
    MCAPI class gametest::GameTestTicker& getTicker();

    // symbol: ?loadExistingTests@MinecraftGameTest@@QEAAXAEAVLevel@@@Z
    MCAPI void loadExistingTests(class Level& level);

    // symbol: ?registerDefaultGameBatches@MinecraftGameTest@@QEAAXAEAVLevel@@@Z
    MCAPI void registerDefaultGameBatches(class Level& level);

    // symbol: ?registerNativeGameTests@MinecraftGameTest@@QEAAXXZ
    MCAPI void registerNativeGameTests();

    // symbol:
    // ?runTest@MinecraftGameTest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEAVDimension@@AEBUTestParameters@gametest@@@Z
    MCAPI std::string
          runTest(std::string const&, class Dimension& dimension, struct gametest::TestParameters const& params);

    // symbol:
    // ?runTest@MinecraftGameTest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEAVDimension@@AEBUTestParameters@gametest@@V?$vector@V?$shared_ptr@VIGameTestListener@gametest@@@std@@V?$allocator@V?$shared_ptr@VIGameTestListener@gametest@@@std@@@2@@3@@Z
    MCAPI std::string
    runTest(std::string const&, class Dimension& dimension, struct gametest::TestParameters const& params, std::vector<std::shared_ptr<class gametest::IGameTestListener>>);

    // symbol:
    // ?runTestAt@MinecraftGameTest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@AEBVBlockPos@@V?$optional@W4Rotation@@@3@@Z
    MCAPI std::string runTestAt(class BlockSource&, class BlockPos const&, std::optional<::Rotation>);

    // symbol:
    // ?runTests@MinecraftGameTest@@QEAAAEBV?$vector@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@@2@@std@@AEAVDimension@@$$QEAUTestParameters@gametest@@@Z
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>> const&
          runTests(class Dimension& dimension, struct gametest::TestParameters&& params);

    // symbol: ?stopAllTests@MinecraftGameTest@@QEAAXXZ
    MCAPI void stopAllTests();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_runTestPreparation@MinecraftGameTest@@AEAAXAEBVBaseGameTestFunction@gametest@@@Z
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const&);

    // NOLINTEND
};
