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
    // vIndex: 0, symbol: __gen_??1GameTestCommand@@UEAA@XZ
    virtual ~GameTestCommand() = default;

    // vIndex: 2, symbol: ?execute@GameTestCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?addGameTestNameEnums@GameTestCommand@@SAXAEAVMinecraftGameTest@@AEAVCommandRegistry@@@Z
    MCAPI static void addGameTestNameEnums(class MinecraftGameTest&, class CommandRegistry& commandRegistry);

    // symbol: ?setup@GameTestCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createTestParameters@GameTestCommand@@AEBA?AUTestParameters@gametest@@AEAVBlockSource@@AEBVCommandOrigin@@@Z
    MCAPI struct gametest::TestParameters
    _createTestParameters(class BlockSource& region, class CommandOrigin const& origin) const;

    // symbol: ?_handleCreateTest@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void
    _handleCreateTest(class BlockSource& region, class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol:
    // ?_handleRun@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _handleRun(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    // symbol:
    // ?_handleRunNearbyTests@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _handleRunNearbyTests(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    // symbol:
    // ?_handleRunSet@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@_N@Z
    MCAPI void _handleRunSet(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        bool
    ) const;

    // symbol:
    // ?_handleRunThis@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _handleRunThis(
        class MinecraftGameTest&,
        class BlockSource&         region,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    // symbol: ?_handleShowPosition@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void
    _handleShowPosition(class BlockSource& region, class CommandOrigin const& origin, class CommandOutput& output)
        const;

    // symbol:
    // ?_runTestAt@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@PEAVCommandOutput@@AEBVBlockPos@@V?$optional@W4Rotation@@@std@@@Z
    MCAPI void _runTestAt(
        class MinecraftGameTest&,
        class BlockSource&   region,
        class CommandOutput* output,
        class BlockPos const&,
        std::optional<::Rotation> rotation
    ) const;

    // NOLINTEND
};
