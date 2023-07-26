#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

class ItemFrameBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    ItemFrameBlockActor& operator=(ItemFrameBlockActor const&) = delete;
    ItemFrameBlockActor(ItemFrameBlockActor const&)            = delete;
    ItemFrameBlockActor()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@ItemFrameBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@ItemFrameBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource&); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getShadowRadius\@ItemFrameBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource&) const; // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@ItemFrameBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@ItemFrameBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMFRAMEBLOCKACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemFrameBlockActor(); // NOLINT
#endif
    /**
     * @symbol ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos); // NOLINT
    /**
     * @symbol
     * ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos, enum class BlockActorType, std::string const&); // NOLINT
    /**
     * @symbol ?actuallyDropItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_NPEAVActor\@\@\@Z
     */
    MCAPI void actuallyDropItem(class BlockSource&, bool, class Actor*); // NOLINT
    /**
     * @symbol ?dropFramedItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_NPEAVActor\@\@\@Z
     */
    MCAPI void dropFramedItem(class BlockSource&, bool, class Actor*); // NOLINT
    /**
     * @symbol ?getFramedItem\@ItemFrameBlockActor\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getFramedItem() const; // NOLINT
    /**
     * @symbol ?getRotation\@ItemFrameBlockActor\@\@QEAAMXZ
     */
    MCAPI float getRotation(); // NOLINT
    /**
     * @symbol ?rotateFramedItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@AEAVActor\@\@\@Z
     */
    MCAPI void rotateFramedItem(class BlockSource&, class Actor&); // NOLINT
    /**
     * @symbol ?setItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemInstance\@\@PEAVActor\@\@\@Z
     */
    MCAPI void setItem(class BlockSource&, class ItemInstance const&, class Actor*); // NOLINT
    /**
     * @symbol ?updateNameTag\@ItemFrameBlockActor\@\@QEAAXXZ
     */
    MCAPI void updateNameTag(); // NOLINT
    /**
     * @symbol ?ROTATION_DEGREES\@ItemFrameBlockActor\@\@2MB
     */
    MCAPI static float const ROTATION_DEGREES; // NOLINT

    // private:
    /**
     * @symbol ?_checkMapRemoval\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEAVItemInstance\@\@\@Z
     */
    MCAPI void _checkMapRemoval(class BlockSource&, class ItemInstance&); // NOLINT
    /**
     * @symbol
     * ?_updateBit\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBV?$BlockStateVariant\@_N\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI void
    _updateBit(class BlockSource&, class BlockStateVariant<bool> const&, class HashedString const&); // NOLINT

private:
};
