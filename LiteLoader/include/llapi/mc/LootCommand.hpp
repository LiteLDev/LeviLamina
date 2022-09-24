/**
 * @file  LootCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootCommand.
 *
 */
class LootCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTCOMMAND
public:
    class LootCommand& operator=(class LootCommand const &) = delete;
    LootCommand(class LootCommand const &) = delete;
    LootCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LootCommand();
    /**
     * @hash   -382274480
     * @vftbl  1
     * @symbol ?execute@LootCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1595886648
     * @symbol ?getToolItemStack@LootCommand@@QEBA?AVItemStack@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI class ItemStack getToolItemStack(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   222072704
     * @symbol ?setup@LootCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   1508991420
     * @symbol ?_canReplaceItemsInTargetEntity@LootCommand@@AEBA_NAEAVCommandOutput@@AEBVActor@@@Z
     */
    MCAPI bool _canReplaceItemsInTargetEntity(class CommandOutput &, class Actor const &) const;
    /**
     * @hash   -1172866178
     * @symbol ?_getItemsFromSource@LootCommand@@AEBA?AV?$optional@V?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBVItemStack@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI class std::optional<std::vector<class ItemStack>> _getItemsFromSource(class CommandOrigin const &, class CommandOutput &, class ItemStack const &, class Level &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   -1549236102
     * @symbol ?_outputSuccess@LootCommand@@AEBAXAEAVCommandOutput@@H@Z
     */
    MCAPI void _outputSuccess(class CommandOutput &, int) const;
    /**
     * @hash   1198578096
     * @symbol ?_placeItemsInTarget@LootCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     */
    MCAPI void _placeItemsInTarget(class CommandOrigin const &, class CommandOutput &, std::vector<class ItemStack> &) const;
    /**
     * @hash   -831455172
     * @symbol ?_slotBoundsValidOrOutputFailure@LootCommand@@AEBA_NAEAVCommandOutput@@HV?$optional@H@std@@@Z
     */
    MCAPI bool _slotBoundsValidOrOutputFailure(class CommandOutput &, int, class std::optional<int>) const;

private:

};