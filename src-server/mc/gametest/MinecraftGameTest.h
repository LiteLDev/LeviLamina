#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/util/Rotation.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class Level;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaec2e4;
    ::ll::UntypedStorage<8, 8> mUnkfa1348;
    ::ll::UntypedStorage<8, 8> mUnk5a5712;
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
    virtual ~MinecraftGameTest() /*override*/ = default;

    // vIndex: 24
    virtual void onLevelDestruction(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameTest(::Level& level);

    MCNAPI void _runTestPreparation(::gametest::BaseGameTestFunction const& testFunction);

    MCNAPI void clearAllTests(::BlockSource& region);

    MCNAPI ::std::string runTest(::std::string const& testName, ::Dimension& dimension, ::gametest::TestParameters const& params);

    MCNAPI ::std::string runTest(::std::string const& testName, ::Dimension& dimension, ::gametest::TestParameters const& params, ::std::vector<::std::shared_ptr<::gametest::IGameTestListener>> listeners);

    MCNAPI ::std::string runTestAt(::BlockSource& region, ::BlockPos const& structureBlockPos, ::std::optional<::Rotation> rotation);

    MCNAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const& runTests(::Dimension& dimension, ::gametest::TestParameters&& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelDestruction(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
