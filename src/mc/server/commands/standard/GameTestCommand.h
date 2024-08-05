#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    GameTestCommand& operator=(GameTestCommand const&);
    GameTestCommand(GameTestCommand const&);
    GameTestCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameTestCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void addGameTestNameEnums(class MinecraftGameTest&, class CommandRegistry& commandRegistry);

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct gametest::TestParameters
    _createTestParameters(class BlockSource& region, class CommandOrigin const& origin) const;

    MCAPI void
    _handleCreateTest(class BlockSource& region, class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _handleRun(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    MCAPI void _handleRunNearbyTests(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    MCAPI void _handleRunSet(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        bool
    ) const;

    MCAPI void _handleRunThis(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    MCAPI void
    _handleShowPosition(class BlockSource& region, class CommandOrigin const& origin, class CommandOutput& output)
        const;

    MCAPI void _runTestAt(
        class MinecraftGameTest&,
        class BlockSource&   region,
        class CommandOutput* output,
        class BlockPos const&,
        std::optional<::Rotation> rotation
    ) const;

    // NOLINTEND
};
