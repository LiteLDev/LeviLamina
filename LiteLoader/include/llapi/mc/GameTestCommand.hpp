/**
 * @file  GameTestCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestCommand.
 *
 */
class GameTestCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTCOMMAND
public:
    class GameTestCommand& operator=(class GameTestCommand const &) = delete;
    GameTestCommand(class GameTestCommand const &) = delete;
    GameTestCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GameTestCommand();
    /**
     * @hash   1867193244
     * @vftbl  1
     * @symbol ?execute@GameTestCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   60268287
     * @symbol ?addGameTestNameEnums@GameTestCommand@@SAXAEAVMinecraftGameTest@@AEAVCommandRegistry@@@Z
     */
    MCAPI static void addGameTestNameEnums(class MinecraftGameTest &, class CommandRegistry &);
    /**
     * @hash   1853512304
     * @symbol ?setup@GameTestCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -1580437307
     * @symbol ?_createTestParameters@GameTestCommand@@AEBA?AUTestParameters@gametest@@AEAVBlockSource@@AEBVCommandOrigin@@@Z
     */
    MCAPI struct gametest::TestParameters _createTestParameters(class BlockSource &, class CommandOrigin const &) const;
    /**
     * @hash   -1504794543
     * @symbol ?_handleCreateTest@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleCreateTest(class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   192358057
     * @symbol ?_handleRun@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleRun(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   650316131
     * @symbol ?_handleRunNearbyTests@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleRunNearbyTests(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -384768765
     * @symbol ?_handleRunSet@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleRunSet(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   274788807
     * @symbol ?_handleRunThis@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleRunThis(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -2147305143
     * @symbol ?_handleShowPosition@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleShowPosition(class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   270312499
     * @symbol ?_runTestAt@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@PEAVCommandOutput@@AEBVBlockPos@@V?$optional@W4Rotation@@@std@@@Z
     */
    MCAPI void _runTestAt(class MinecraftGameTest &, class BlockSource &, class CommandOutput *, class BlockPos const &, class std::optional<enum Rotation>) const;

private:

};