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
    ::ll::TypedStorage<8, 32, ::std::string>          mTestName;
    ::ll::TypedStorage<8, 32, ::std::string>          mTestTag;
    ::ll::TypedStorage<4, 4, int>                     mTestRotationSteps;
    ::ll::TypedStorage<4, 4, int>                     mRepeatCount;
    ::ll::TypedStorage<1, 1, bool>                    mStopOnFailure;
    ::ll::TypedStorage<4, 4, ::GameTestCommand::Mode> mMode;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationWidth;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationHeight;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

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
