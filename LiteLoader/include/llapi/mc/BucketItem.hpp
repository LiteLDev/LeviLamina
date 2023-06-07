/**
 * @file  BucketItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BucketItem.
 *
 */
class BucketItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETITEM
public:
    class BucketItem& operator=(class BucketItem const &) = delete;
    BucketItem(class BucketItem const &) = delete;
    BucketItem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 56
     * @symbol ?isDestructive\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl 57
     * @symbol ?isLiquidClipItem\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 83
     * @symbol ?canUseOnSimTick\@BucketItem\@\@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @vftbl 84
     * @symbol ?use\@BucketItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl 85
     * @symbol ?dispense\@BucketItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl 86
     * @symbol ?useTimeDepleted\@BucketItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@BucketItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl 95
     * @symbol ?buildDescriptionId\@BucketItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl 100
     * @symbol ?getMaxStackSize\@BucketItem\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @vftbl 111
     * @symbol ?validFishInteraction\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 119
     * @symbol ?setIconInfo\@BucketItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl 124
     * @symbol ?getLightEmission\@BucketItem\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @vftbl 131
     * @symbol ?getAuxValuesDescription\@BucketItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl 134
     * @symbol ?_useOn\@BucketItem\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
    /**
     * @symbol ?isBucket\@BucketItem\@\@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @symbol ?uniqueAuxValues\@BucketItem\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0BucketItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4BucketFillType\@\@\@Z
     */
    MCAPI BucketItem(std::string const &, int, enum class BucketFillType);
    /**
     * @symbol ?DRINK_DURATION\@BucketItem\@\@2HB
     */
    MCAPI static int const DRINK_DURATION;

//protected:
    /**
     * @symbol ?addBucketEntitySaveData\@BucketItem\@\@IEBAXAEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    /**
     * @symbol ?readBucketEntitySaveData\@BucketItem\@\@IEBA_NAEAVBlockSource\@\@PEAVActor\@\@EVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    /**
     * @symbol ?_canEmptyBucketIntoBlock\@BucketItem\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@2\@Z
     */
    MCAPI bool _canEmptyBucketIntoBlock(class BlockSource &, class BlockPos const &, class Block const &, class Block const &) const;
    /**
     * @symbol ?_emptyBucket\@BucketItem\@\@AEBA_NAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@PEAVActor\@\@AEBVItemStack\@\@E\@Z
     */
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    /**
     * @symbol ?_removeBubbleColumn\@BucketItem\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _removeBubbleColumn(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_takeLiquid\@BucketItem\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?_takePowderSnow\@BucketItem\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?_tryGetBlock\@BucketItem\@\@AEBAPEBVBlockLegacy\@\@W4BucketFillType\@\@\@Z
     */
    MCAPI class BlockLegacy const * _tryGetBlock(enum class BucketFillType) const;

protected:

private:
    /**
     * @symbol ?mFillTypeToEntityType\@BucketItem\@\@0V?$vector\@U?$pair\@W4BucketFillType\@\@W4ActorType\@\@\@std\@\@V?$allocator\@U?$pair\@W4BucketFillType\@\@W4ActorType\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static std::vector<struct std::pair<enum class BucketFillType, enum class ActorType>> const mFillTypeToEntityType;

};
