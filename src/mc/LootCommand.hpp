/**
 * @file  LootCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Util.hpp"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~LootCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@LootCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?getToolItemStack\@LootCommand\@\@QEBA?AVItemStack\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class ItemStack getToolItemStack(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@LootCommand\@\@SAXAEAVCommandRegistry\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class ItemRegistryRef);

//private:
    /**
     * @symbol  ?_getItemsFromSource\@LootCommand\@\@AEBA?AV?$optional\@V?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVItemStack\@\@AEAVLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class std::optional<std::vector<class ItemStack>> _getItemsFromSource(class CommandOrigin const &, class CommandOutput &, class ItemStack const &, class Level &, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?_outputError\@LootCommand\@\@AEBAXAEAVCommandOutput\@\@UReplacementResults\@Util\@\@PEBVActor\@\@\@Z
     */
    MCAPI void _outputError(class CommandOutput &, struct Util::ReplacementResults, class Actor const *) const;
    /**
     * @symbol  ?_outputSuccess\@LootCommand\@\@AEBAXAEAVCommandOutput\@\@H\@Z
     */
    MCAPI void _outputSuccess(class CommandOutput &, int) const;
    /**
     * @symbol  ?_placeItemsInTarget\@LootCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _placeItemsInTarget(class CommandOrigin const &, class CommandOutput &, std::vector<class ItemStack> &) const;

private:

};