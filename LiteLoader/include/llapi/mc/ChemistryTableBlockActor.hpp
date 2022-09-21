/**
 * @file  MC/ChemistryTableBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1438713747
     * @symbol ?getContainer@ChemistryTableBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -1866435607
     * @symbol ?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -801931227
     * @symbol ?getContainerSize@ChemistryTableBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1953340374
     * @symbol ?getItem@ChemistryTableBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -2056078812
     * @symbol ?getMaxStackSize@ChemistryTableBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1154759655
     * @symbol ?load@ChemistryTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1449093474
     * @symbol ?onRemoved@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @hash   -292368920
     * @symbol ?save@ChemistryTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -371905941
     * @symbol ?serverInitItemStackIds@ChemistryTableBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   999930767
     * @symbol ?setItem@ChemistryTableBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   1711007634
     * @symbol ?startOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -1302327374
     * @symbol ?stopOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   61753554
     * @symbol ?tick@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -1706676363
     * @symbol ??0ChemistryTableBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI ChemistryTableBlockActor(class BlockPos const &);
    /**
     * @hash   124442261
     * @symbol ?isSameType@ChemistryTableBlockActor@@QEBA_NW4ChemistryTableType@@@Z
     */
    MCAPI bool isSameType(enum ChemistryTableType) const;
    /**
     * @hash   -2039025162
     * @symbol ?playerOpenLabTable@ChemistryTableBlockActor@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void playerOpenLabTable(class Player &);
    /**
     * @hash   -1028681434
     * @symbol ?reset@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void reset(class BlockSource &);
    /**
     * @hash   -1746413507
     * @symbol ?serverCombine@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     */
    MCAPI void serverCombine(class BlockSource &, std::vector<class ItemStack> const &);
    /**
     * @hash   -2006077917
     * @symbol ?serverLabTablePacket_DEPRECATED@ChemistryTableBlockActor@@QEAAXAEBVLabTablePacket@@AEAVBlockSource@@@Z
     */
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const &, class BlockSource &);

//private:
    /**
     * @hash   258909389
     * @symbol ?_createReaction@ChemistryTableBlockActor@@AEAA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@AEAVRandom@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
     */
    MCAPI std::unique_ptr<class LabTableReaction> _createReaction(class Random &, std::vector<class ItemStack> const &);
    /**
     * @hash   -1227531381
     * @symbol ?_popPendingReactionOutput@ChemistryTableBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _popPendingReactionOutput(class BlockSource &);
    /**
     * @hash   -1376507830
     * @symbol ?_updateType@ChemistryTableBlockActor@@AEAA?AW4ChemistryTableType@@AEAVBlockSource@@@Z
     */
    MCAPI enum ChemistryTableType _updateType(class BlockSource &);

private:

};