/**
 * @file  SuspiciousSandBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SuspiciousSandBlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPICIOUSSANDBLOCKACTOR
public:
    class SuspiciousSandBlockActor& operator=(class SuspiciousSandBlockActor const &) = delete;
    SuspiciousSandBlockActor(class SuspiciousSandBlockActor const &) = delete;
    SuspiciousSandBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPICIOUSSANDBLOCKACTOR
    /**
     * @symbol ?_getUpdatePacket\@SuspiciousSandBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket\@SuspiciousSandBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?getContainerSize\@SuspiciousSandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem\@SuspiciousSandBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize\@SuspiciousSandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?load\@SuspiciousSandBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onChanged\@SuspiciousSandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol ?onRemoved\@SuspiciousSandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @symbol ?save\@SuspiciousSandBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds\@SuspiciousSandBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setItem\@SuspiciousSandBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?stopOpen\@SuspiciousSandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @symbol ??0SuspiciousSandBlockActor\@\@QEAA\@AEBVBlockPos\@\@W4Placement\@0\@\@Z
     */
    MCAPI SuspiciousSandBlockActor(class BlockPos const &, enum class SuspiciousSandBlockActor::Placement);
    /**
     * @symbol ?brush\@SuspiciousSandBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void brush(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?update\@SuspiciousSandBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void update(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getLootTableFromVariant\@SuspiciousSandBlockActor\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Placement\@1\@\@Z
     */
    MCAPI static std::string getLootTableFromVariant(enum class SuspiciousSandBlockActor::Placement);
    /**
     * @symbol ?tryGet\@SuspiciousSandBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class SuspiciousSandBlockActor * tryGet(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_brushingCompleted\@SuspiciousSandBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _brushingCompleted(class BlockSource &);
    /**
     * @symbol ?_removeDisplayEntity\@SuspiciousSandBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _removeDisplayEntity(class BlockSource &);

private:

};
