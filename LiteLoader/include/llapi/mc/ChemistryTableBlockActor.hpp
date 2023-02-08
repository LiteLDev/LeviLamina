/**
 * @file  ChemistryTableBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -513370691
     * @symbol  ?getContainer\@ChemistryTableBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -941092551
     * @symbol  ?getContainer\@ChemistryTableBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -1717833419
     * @symbol  ?getContainerSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1416283866
     * @symbol  ?getItem\@ChemistryTableBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1322771028
     * @symbol  ?getMaxStackSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -229416599
     * @symbol  ?load\@ChemistryTableBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -523658162
     * @symbol  ?onRemoved\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @hash   633112520
     * @symbol  ?save\@ChemistryTableBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   553637003
     * @symbol  ?serverInitItemStackIds\@ChemistryTableBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1925489087
     * @symbol  ?setItem\@ChemistryTableBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   1802894610
     * @symbol  ?startOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -376753678
     * @symbol  ?stopOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   987327250
     * @symbol  ?tick\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -781440939
     * @symbol  ??0ChemistryTableBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChemistryTableBlockActor(class BlockPos const &);
    /**
     * @hash   1049785317
     * @symbol  ?isSameType\@ChemistryTableBlockActor\@\@QEBA_NW4ChemistryTableType\@\@\@Z
     */
    MCAPI bool isSameType(enum class ChemistryTableType) const;
    /**
     * @hash   -1113574474
     * @symbol  ?playerOpenLabTable\@ChemistryTableBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void playerOpenLabTable(class Player &);
    /**
     * @hash   -103215370
     * @symbol  ?reset\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void reset(class BlockSource &);
    /**
     * @hash   -820932067
     * @symbol  ?serverCombine\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void serverCombine(class BlockSource &, std::vector<class ItemStack> const &);
    /**
     * @hash   -1080519597
     * @symbol  ?serverLabTablePacket_DEPRECATED\@ChemistryTableBlockActor\@\@QEAAXAEBVLabTablePacket\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const &, class BlockSource &);

//private:
    /**
     * @hash   1184175565
     * @symbol  ?_createReaction\@ChemistryTableBlockActor\@\@AEAA?AV?$unique_ptr\@VLabTableReaction\@\@U?$default_delete\@VLabTableReaction\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class LabTableReaction> _createReaction(class Random &, std::vector<class ItemStack> const &);
    /**
     * @hash   -302234453
     * @symbol  ?_popPendingReactionOutput\@ChemistryTableBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _popPendingReactionOutput(class BlockSource &);
    /**
     * @hash   -451210902
     * @symbol  ?_updateType\@ChemistryTableBlockActor\@\@AEAA?AW4ChemistryTableType\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI enum class ChemistryTableType _updateType(class BlockSource &);

private:

};