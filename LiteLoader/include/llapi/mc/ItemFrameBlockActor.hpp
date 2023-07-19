/**
 * @file  ItemFrameBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemFrameBlockActor.
 *
 */
class ItemFrameBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEBLOCKACTOR
public:
    class ItemFrameBlockActor& operator=(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@ItemFrameBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 2
     * @symbol ?save\@ItemFrameBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol ?getShadowRadius\@ItemFrameBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol ?_getUpdatePacket\@ItemFrameBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@ItemFrameBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMFRAMEBLOCKACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemFrameBlockActor();
#endif
    /**
     * @symbol ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos);
    /**
     * @symbol ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos, enum class BlockActorType, std::string const &);
    /**
     * @symbol ?actuallyDropItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_NPEAVActor\@\@\@Z
     */
    MCAPI void actuallyDropItem(class BlockSource &, bool, class Actor *);
    /**
     * @symbol ?dropFramedItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_NPEAVActor\@\@\@Z
     */
    MCAPI void dropFramedItem(class BlockSource &, bool, class Actor *);
    /**
     * @symbol ?getFramedItem\@ItemFrameBlockActor\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getFramedItem() const;
    /**
     * @symbol ?getRotation\@ItemFrameBlockActor\@\@QEAAMXZ
     */
    MCAPI float getRotation();
    /**
     * @symbol ?rotateFramedItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@AEAVActor\@\@\@Z
     */
    MCAPI void rotateFramedItem(class BlockSource &, class Actor &);
    /**
     * @symbol ?setItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemInstance\@\@PEAVActor\@\@\@Z
     */
    MCAPI void setItem(class BlockSource &, class ItemInstance const &, class Actor *);
    /**
     * @symbol ?updateNameTag\@ItemFrameBlockActor\@\@QEAAXXZ
     */
    MCAPI void updateNameTag();
    /**
     * @symbol ?ROTATION_DEGREES\@ItemFrameBlockActor\@\@2MB
     */
    MCAPI static float const ROTATION_DEGREES;

//private:
    /**
     * @symbol ?_checkMapRemoval\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEAVItemInstance\@\@\@Z
     */
    MCAPI void _checkMapRemoval(class BlockSource &, class ItemInstance &);
    /**
     * @symbol ?_updateBit\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBV?$BlockStateVariant\@_N\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI void _updateBit(class BlockSource &, class BlockStateVariant<bool> const &, class HashedString const &);

private:

};
