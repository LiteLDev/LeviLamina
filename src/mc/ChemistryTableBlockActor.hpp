/**
 * @file  ChemistryTableBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChemistryTableBlockActor.
 *
 */
class ChemistryTableBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYTABLEBLOCKACTOR
public:
    class ChemistryTableBlockActor& operator=(class ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor(class ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYTABLEBLOCKACTOR
    /**
     * @symbol  ?getContainer\@ChemistryTableBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@ChemistryTableBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@ChemistryTableBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?load\@ChemistryTableBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onRemoved\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @symbol  ?save\@ChemistryTableBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@ChemistryTableBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@ChemistryTableBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0ChemistryTableBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChemistryTableBlockActor(class BlockPos const &);
    /**
     * @symbol  ?isSameType\@ChemistryTableBlockActor\@\@QEBA_NW4ChemistryTableType\@\@\@Z
     */
    MCAPI bool isSameType(enum class ChemistryTableType) const;
    /**
     * @symbol  ?playerOpenLabTable\@ChemistryTableBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void playerOpenLabTable(class Player &);
    /**
     * @symbol  ?reset\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void reset(class BlockSource &);
    /**
     * @symbol  ?serverCombine\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void serverCombine(class BlockSource &, std::vector<class ItemStack> const &);
    /**
     * @symbol  ?serverLabTablePacket_DEPRECATED\@ChemistryTableBlockActor\@\@QEAAXAEBVLabTablePacket\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const &, class BlockSource &);

//private:
    /**
     * @symbol  ?_createReaction\@ChemistryTableBlockActor\@\@AEAA?AV?$unique_ptr\@VLabTableReaction\@\@U?$default_delete\@VLabTableReaction\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class LabTableReaction> _createReaction(class Random &, std::vector<class ItemStack> const &);
    /**
     * @symbol  ?_popPendingReactionOutput\@ChemistryTableBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _popPendingReactionOutput(class BlockSource &);
    /**
     * @symbol  ?_updateType\@ChemistryTableBlockActor\@\@AEAA?AW4ChemistryTableType\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI enum class ChemistryTableType _updateType(class BlockSource &);

private:

};