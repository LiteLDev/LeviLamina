/**
 * @file  LecternBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LecternBlockActor.
 *
 */
class LecternBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNBLOCKACTOR
public:
    class LecternBlockActor& operator=(class LecternBlockActor const &) = delete;
    LecternBlockActor(class LecternBlockActor const &) = delete;
    LecternBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LECTERNBLOCKACTOR
    /**
     * @hash   -1682072904
     * @symbol ?_getUpdatePacket@LecternBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -631619446
     * @symbol ?_onUpdatePacket@LecternBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1427202304
     * @symbol ?getContainer@LecternBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   999480444
     * @symbol ?getContainer@LecternBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1603587768
     * @symbol ?getContainerSize@LecternBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1008775053
     * @symbol ?getItem@LecternBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   827029047
     * @symbol ?getMaxStackSize@LecternBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   2111101558
     * @symbol ?load@LecternBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -295983737
     * @symbol ?onChanged@LecternBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   -807959611
     * @symbol ?save@LecternBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1042995544
     * @symbol ?serverInitItemStackIds@LecternBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -553731566
     * @symbol ?setItem@LecternBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -1999669153
     * @symbol ?startOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   2138786047
     * @symbol ?stopOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @hash   -133079406
     * @symbol ??0LecternBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI LecternBlockActor(class BlockPos const &);
    /**
     * @hash   1061845670
     * @symbol ?dropBook@LecternBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void dropBook(class BlockSource &);
    /**
     * @hash   -130528814
     * @symbol ?getPage@LecternBlockActor@@QEBAHXZ
     */
    MCAPI int getPage() const;
    /**
     * @hash   1633840564
     * @symbol ?getTotalPages@LecternBlockActor@@QEBAHXZ
     */
    MCAPI int getTotalPages() const;
    /**
     * @hash   -133127824
     * @symbol ?hasBook@LecternBlockActor@@QEBA_NXZ
     */
    MCAPI bool hasBook() const;
    /**
     * @hash   -1035661337
     * @symbol ?setItemFromBlock@LecternBlockActor@@QEAAXHAEBVItemStack@@@Z
     */
    MCAPI void setItemFromBlock(int, class ItemStack const &);
    /**
     * @hash   -980748255
     * @symbol ?setPageOnServer@LecternBlockActor@@QEAAXHAEAVBlockSource@@@Z
     */
    MCAPI void setPageOnServer(int, class BlockSource &);
    /**
     * @hash   -1844874718
     * @symbol ?setTotalPages@LecternBlockActor@@QEAAXH@Z
     */
    MCAPI void setTotalPages(int);

};