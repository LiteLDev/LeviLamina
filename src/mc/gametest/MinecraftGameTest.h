#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/LevelEvent.h"

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
    // vIndex: 0
    virtual ~MinecraftGameTest();

    // vIndex: 23
    virtual void onLevelDestruction(std::string const&);

    MCAPI explicit MinecraftGameTest(class Level& level);

    MCAPI void clearAllTests(class BlockSource& region);

    MCAPI class gametest::GameTestRegistry& getRegistry();

    MCAPI class gametest::GameTestTicker& getTicker();

    MCAPI void loadExistingTests(class Level& level);

    MCAPI void registerDefaultGameBatches(class Level& level);

    MCAPI void registerNativeGameTests();

    MCAPI std::string
    runTest(std::string const& testName, class Dimension& dimension, struct gametest::TestParameters const& params);

    MCAPI std::string runTest(
        std::string const&                                              testName,
        class Dimension&                                                dimension,
        struct gametest::TestParameters const&                          params,
        std::vector<std::shared_ptr<class gametest::IGameTestListener>> listeners
    );

    MCAPI std::string
    runTestAt(class BlockSource& region, class BlockPos const& structureBlockPos, std::optional<::Rotation> rotation);

    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>> const&
          runTests(class Dimension& dimension, struct gametest::TestParameters&& params);

    MCAPI void stopAllTests();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const& testFunction);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Level& level);

    MCAPI void dtor$();

    MCAPI void onLevelDestruction$(std::string const&);

    // NOLINTEND
};
