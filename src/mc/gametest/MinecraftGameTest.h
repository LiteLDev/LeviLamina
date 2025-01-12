#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class Level;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkaec2e4;
    ::ll::UntypedStorage<8, 8>  mUnkfa1348;
    ::ll::UntypedStorage<8, 8>  mUnk5a5712;
    ::ll::UntypedStorage<8, 16> mUnk46408e;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTest& operator=(MinecraftGameTest const&);
    MinecraftGameTest(MinecraftGameTest const&);
    MinecraftGameTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTest() /*override*/;

    // vIndex: 23
    virtual void onLevelDestruction(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftGameTest(::Level& level);

    MCAPI void _runTestPreparation(::gametest::BaseGameTestFunction const& testFunction);

    MCAPI void clearAllTests(::BlockSource& region);

    MCFOLD ::gametest::GameTestRegistry& getRegistry();

    MCFOLD ::gametest::GameTestTicker& getTicker();

    MCAPI void loadExistingTests(::Level& level);

    MCAPI void registerDefaultGameBatches(::Level& level);

    MCFOLD void registerNativeGameTests();

    MCAPI ::std::string
    runTest(::std::string const& testName, ::Dimension& dimension, ::gametest::TestParameters const& params);

    MCAPI ::std::string runTest(
        ::std::string const&                                            testName,
        ::Dimension&                                                    dimension,
        ::gametest::TestParameters const&                               params,
        ::std::vector<::std::shared_ptr<::gametest::IGameTestListener>> listeners
    );

    MCAPI ::std::string
    runTestAt(::BlockSource& region, ::BlockPos const& structureBlockPos, ::std::optional<::Rotation> rotation);

    MCAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const&
    runTests(::Dimension& dimension, ::gametest::TestParameters&& params);

    MCAPI void stopAllTests();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelDestruction(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
