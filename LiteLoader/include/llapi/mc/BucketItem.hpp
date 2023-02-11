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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BucketItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   1161374074
     * @vftbl  56
     * @symbol  ?isDestructive\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   1577610329
     * @vftbl  57
     * @symbol  ?isLiquidClipItem\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @hash   -329781933
     * @vftbl  67
     * @symbol  ?isValidAuxValue\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   -350871879
     * @vftbl  83
     * @symbol  ?canUseOnSimTick\@BucketItem\@\@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @hash   -2071481903
     * @vftbl  84
     * @symbol  ?use\@BucketItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   62127001
     * @vftbl  85
     * @symbol  ?dispense\@BucketItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -1693551507
     * @vftbl  86
     * @symbol  ?useTimeDepleted\@BucketItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   1710090607
     * @vftbl  87
     * @symbol  ?releaseUsing\@BucketItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   762105149
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@BucketItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1578715190
     * @vftbl  100
     * @symbol  ?getMaxStackSize\@BucketItem\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   -1227768124
     * @vftbl  111
     * @symbol  ?validFishInteraction\@BucketItem\@\@UEBA_NH\@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @hash   309221853
     * @vftbl  117
     * @symbol  ?setIconInfo\@BucketItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @hash   1176409480
     * @vftbl  122
     * @symbol  ?getLightEmission\@BucketItem\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @hash   -697215143
     * @vftbl  129
     * @symbol  ?getAuxValuesDescription\@BucketItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   187843691
     * @vftbl  132
     * @symbol  ?_useOn\@BucketItem\@\@EEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
    /**
     * @hash   -989990433
     * @symbol  ?isBucket\@BucketItem\@\@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @hash   -478243456
     * @symbol  ?uniqueAuxValues\@BucketItem\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   -1890411854
     * @symbol  ??0BucketItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4BucketFillType\@\@\@Z
     */
    MCAPI BucketItem(std::string const &, int, enum class BucketFillType);
    /**
     * @hash   290199389
     * @symbol  ?DRINK_DURATION\@BucketItem\@\@2HB
     */
    MCAPI static int const DRINK_DURATION;

//protected:
    /**
     * @hash   2056533594
     * @symbol  ?addBucketEntitySaveData\@BucketItem\@\@IEBAXAEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    /**
     * @hash   2097791784
     * @symbol  ?readBucketEntitySaveData\@BucketItem\@\@IEBA_NAEAVBlockSource\@\@PEAVActor\@\@EVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    /**
     * @hash   2128559533
     * @symbol  ?_canEmptyBucketIntoBlock\@BucketItem\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@2\@Z
     */
    MCAPI bool _canEmptyBucketIntoBlock(class BlockSource &, class BlockPos const &, class Block const &, class Block const &) const;
    /**
     * @hash   -1149881630
     * @symbol  ?_emptyBucket\@BucketItem\@\@AEBA_NAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@PEAVActor\@\@AEBVItemStack\@\@E\@Z
     */
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    /**
     * @hash   154605985
     * @symbol  ?_removeBubbleColumn\@BucketItem\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _removeBubbleColumn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   25587414
     * @symbol  ?_takeLiquid\@BucketItem\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @hash   124056070
     * @symbol  ?_takePowderSnow\@BucketItem\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @hash   -648787011
     * @symbol  ?_tryGetBlock\@BucketItem\@\@AEBAPEBVBlockLegacy\@\@W4BucketFillType\@\@\@Z
     */
    MCAPI class BlockLegacy const * _tryGetBlock(enum class BucketFillType) const;

protected:

private:
    /**
     * @hash   -1064303001
     * @symbol  ?mFillTypeToEntityType\@BucketItem\@\@0V?$vector\@U?$pair\@W4BucketFillType\@\@W4ActorType\@\@\@std\@\@V?$allocator\@U?$pair\@W4BucketFillType\@\@W4ActorType\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static std::vector<struct std::pair<enum class BucketFillType, enum class ActorType>> const mFillTypeToEntityType;

};