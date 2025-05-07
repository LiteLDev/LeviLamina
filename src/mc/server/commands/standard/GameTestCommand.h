#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MinecraftGameTest;
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestCommand : public ::ServerCommand {
public:
    // GameTestCommand inner types define
    enum class Mode : int {
        Unknown         = 0,
        ClearAll        = 1,
        Create          = 2,
        Run             = 3,
        RunThis         = 4,
        RunSet          = 5,
        RunSetUntilFail = 6,
        RunNearbyTests  = 7,
        ShowPosition    = 8,
        Stop            = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk65b672;
    ::ll::UntypedStorage<8, 32> mUnk26090e;
    ::ll::UntypedStorage<4, 4>  mUnk81cc73;
    ::ll::UntypedStorage<4, 4>  mUnke78c51;
    ::ll::UntypedStorage<1, 1>  mUnkb367b2;
    ::ll::UntypedStorage<4, 4>  mUnkdd95a0;
    ::ll::UntypedStorage<4, 4>  mUnkef546d;
    ::ll::UntypedStorage<4, 4>  mUnkcac895;
    ::ll::UntypedStorage<4, 4>  mUnk6e4539;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestCommand& operator=(GameTestCommand const&);
    GameTestCommand(GameTestCommand const&);
    GameTestCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~GameTestCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gametest::TestParameters _createTestParameters(::BlockSource& region, ::CommandOrigin const& origin) const;

    MCAPI void _handleCreateTest(::BlockSource& region, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _handleRun(
        ::MinecraftGameTest&   gameTest,
        ::BlockSource&         region,
        ::CommandOrigin const& origin,
        ::CommandOutput&       output
    ) const;

    MCAPI void _handleRunNearbyTests(
        ::MinecraftGameTest&   gameTest,
        ::BlockSource&         region,
        ::CommandOrigin const& origin,
        ::CommandOutput&       output
    ) const;

    MCAPI void _handleRunSet(
        ::MinecraftGameTest&   gameTest,
        ::BlockSource&         region,
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        bool                   stopOtherTestsOnFailure
    ) const;

    MCAPI void _handleRunThis(
        ::MinecraftGameTest&   gameTest,
        ::BlockSource&         region,
        ::CommandOrigin const& origin,
        ::CommandOutput&       output
    ) const;

    MCAPI void _handleShowPosition(::BlockSource& region, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _runTestAt(
        ::MinecraftGameTest&        gameTest,
        ::BlockSource&              region,
        ::CommandOutput*            output,
        ::BlockPos const&           structureBlockPos,
        ::std::optional<::Rotation> rotation
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addGameTestNameEnums(::MinecraftGameTest& gameTest, ::CommandRegistry& commandRegistry);

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
