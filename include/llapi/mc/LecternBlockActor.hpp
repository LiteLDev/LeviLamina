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
     * @symbol  ?_getUpdatePacket\@LecternBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@LecternBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?getContainer\@LecternBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@LecternBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@LecternBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?load\@LecternBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onChanged\@LecternBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol  ?save\@LecternBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@LecternBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@LecternBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @symbol  ??0LecternBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LecternBlockActor(class BlockPos const &);
    /**
     * @symbol  ?dropBook\@LecternBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void dropBook(class BlockSource &);
    /**
     * @symbol  ?getPage\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getPage() const;
    /**
     * @symbol  ?getTotalPages\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTotalPages() const;
    /**
     * @symbol  ?hasBook\@LecternBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool hasBook() const;
    /**
     * @symbol  ?setItemFromBlock\@LecternBlockActor\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void setItemFromBlock(int, class ItemStack const &);
    /**
     * @symbol  ?setPageOnServer\@LecternBlockActor\@\@QEAAXHAEAVBlockSource\@\@\@Z
     */
    MCAPI void setPageOnServer(int, class BlockSource &);
    /**
     * @symbol  ?setTotalPages\@LecternBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTotalPages(int);

};