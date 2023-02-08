/**
 * @file  LecternBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1478433160
     * @symbol  ?_getUpdatePacket\@LecternBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   238769786
     * @symbol  ?_onUpdatePacket\@LecternBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1942421936
     * @symbol  ?getContainer\@LecternBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1924823500
     * @symbol  ?getContainer\@LecternBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1709528408
     * @symbol  ?getContainerSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1683535437
     * @symbol  ?getItem\@LecternBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -89088409
     * @symbol  ?getMaxStackSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1308955962
     * @symbol  ?load\@LecternBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   578941415
     * @symbol  ?onChanged\@LecternBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   66980917
     * @symbol  ?save\@LecternBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1917920696
     * @symbol  ?serverInitItemStackIds\@LecternBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   321208962
     * @symbol  ?setItem\@LecternBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -1907782177
     * @symbol  ?startOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -2064294273
     * @symbol  ?stopOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @hash   741814994
     * @symbol  ??0LecternBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LecternBlockActor(class BlockPos const &);
    /**
     * @hash   1936740070
     * @symbol  ?dropBook\@LecternBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void dropBook(class BlockSource &);
    /**
     * @hash   883656770
     * @symbol  ?getPage\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getPage() const;
    /**
     * @hash   -1803668716
     * @symbol  ?getTotalPages\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTotalPages() const;
    /**
     * @hash   741781952
     * @symbol  ?hasBook\@LecternBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool hasBook() const;
    /**
     * @hash   -160720809
     * @symbol  ?setItemFromBlock\@LecternBlockActor\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void setItemFromBlock(int, class ItemStack const &);
    /**
     * @hash   -105807727
     * @symbol  ?setPageOnServer\@LecternBlockActor\@\@QEAAXHAEAVBlockSource\@\@\@Z
     */
    MCAPI void setPageOnServer(int, class BlockSource &);
    /**
     * @hash   -969918814
     * @symbol  ?setTotalPages\@LecternBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTotalPages(int);

};