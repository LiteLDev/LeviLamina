#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrushableBlockActor {
public:
    // BrushableBlockActor inner types define
    enum class BrushingState {};

    enum class Placement {};

public:
    // prevent constructor by default
    BrushableBlockActor& operator=(BrushableBlockActor const&) = delete;
    BrushableBlockActor(BrushableBlockActor const&)            = delete;
    BrushableBlockActor()                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRUSHABLEBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@BrushableBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @symbol ?_onUpdatePacket\@BrushableBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ?getContainerSize\@BrushableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem\@BrushableBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const;
    /**
     * @symbol ?getMaxStackSize\@BrushableBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?load\@BrushableBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?onChanged\@BrushableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&);
    /**
     * @symbol ?onRemoved\@BrushableBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource&);
    /**
     * @symbol ?save\@BrushableBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const;
    /**
     * @symbol
     * ?serverInitItemStackIds\@BrushableBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);
    /**
     * @symbol ?setItem\@BrushableBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&);
    /**
     * @symbol ?stopOpen\@BrushableBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&);
#endif
    /**
     * @symbol ??0BrushableBlockActor\@\@QEAA\@AEBVHashedString\@\@AEBVBlockPos\@\@W4Placement\@0\@\@Z
     */
    MCAPI
    BrushableBlockActor(class HashedString const&, class BlockPos const&, enum class BrushableBlockActor::Placement);
    /**
     * @symbol ?brush\@BrushableBlockActor\@\@QEAA?AW4BrushingState\@1\@AEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI enum class BrushableBlockActor::BrushingState brush(class BlockSource&, class BlockPos const&, unsigned char);
    /**
     * @symbol
     * ?getLootTableFromVariant\@BrushableBlockActor\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Placement\@1\@\@Z
     */
    MCAPI static std::string getLootTableFromVariant(enum class BrushableBlockActor::Placement);
    /**
     * @symbol ?tryGet\@BrushableBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class BrushableBlockActor* tryGet(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?update\@BrushableBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void update(class BlockSource&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_brushingCompleted\@BrushableBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _brushingCompleted(class BlockSource&);
    /**
     * @symbol ?_removeDisplayEntity\@BrushableBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _removeDisplayEntity(class BlockSource&);
    // NOLINTEND
};
