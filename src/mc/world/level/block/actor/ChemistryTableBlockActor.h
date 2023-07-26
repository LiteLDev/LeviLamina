#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChemistryTableBlockActor {

public:
    // prevent constructor by default
    ChemistryTableBlockActor& operator=(ChemistryTableBlockActor const&) = delete;
    ChemistryTableBlockActor(ChemistryTableBlockActor const&)            = delete;
    ChemistryTableBlockActor()                                           = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYTABLEBLOCKACTOR
    /**
     * @symbol ?getContainer\@ChemistryTableBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@ChemistryTableBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@ChemistryTableBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@ChemistryTableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol ?load\@ChemistryTableBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onRemoved\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@ChemistryTableBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@ChemistryTableBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@ChemistryTableBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@ChemistryTableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@ChemistryTableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ?isSameType\@ChemistryTableBlockActor\@\@QEBA_NW4ChemistryTableType\@\@\@Z
     */
    MCAPI bool isSameType(enum class ChemistryTableType) const; // NOLINT
    /**
     * @symbol ?playerOpenLabTable\@ChemistryTableBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void playerOpenLabTable(class Player&); // NOLINT
    /**
     * @symbol ?reset\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void reset(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?serverCombine\@ChemistryTableBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void serverCombine(class BlockSource&, std::vector<class ItemStack> const&); // NOLINT
    /**
     * @symbol
     * ?serverLabTablePacket_DEPRECATED\@ChemistryTableBlockActor\@\@QEAAXAEBVLabTablePacket\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const&, class BlockSource&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_createReaction\@ChemistryTableBlockActor\@\@AEAA?AV?$unique_ptr\@VLabTableReaction\@\@U?$default_delete\@VLabTableReaction\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class LabTableReaction>
          _createReaction(class Random&, std::vector<class ItemStack> const&); // NOLINT
    /**
     * @symbol ?_popPendingReactionOutput\@ChemistryTableBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _popPendingReactionOutput(class BlockSource&); // NOLINT
    /**
     * @symbol ?_updateType\@ChemistryTableBlockActor\@\@AEAA?AW4ChemistryTableType\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI enum class ChemistryTableType _updateType(class BlockSource&); // NOLINT

private:
};
