/**
 * @file  MC/BucketItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~BucketItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   434519802
     * @vftbl  57
     * @symbol ?isDestructive@BucketItem@@UEBA_NH@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   850756057
     * @vftbl  58
     * @symbol ?isLiquidClipItem@BucketItem@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1120615741
     * @vftbl  68
     * @symbol ?isValidAuxValue@BucketItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1077726151
     * @vftbl  84
     * @symbol ?canUseOnSimTick@BucketItem@@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @hash   1496723377
     * @vftbl  85
     * @symbol ?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -664727271
     * @vftbl  86
     * @symbol ?dispense@BucketItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   1874638397
     * @vftbl  87
     * @symbol ?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   983159455
     * @vftbl  88
     * @symbol ?releaseUsing@BucketItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   35250877
     * @vftbl  96
     * @symbol ?buildDescriptionId@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   851860918
     * @vftbl  101
     * @symbol ?getMaxStackSize@BucketItem@@UEBAEAEBVItemDescriptor@@@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   -1954560892
     * @vftbl  112
     * @symbol ?validFishInteraction@BucketItem@@UEBA_NH@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @hash   449555208
     * @vftbl  121
     * @symbol ?getLightEmission@BucketItem@@UEBA?AUBrightness@@H@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @hash   -761662352
     * @vftbl  122
     * @symbol ?getIcon@BucketItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -753753089
     * @vftbl  124
     * @symbol ?setIcon@BucketItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   -609448935
     * @vftbl  132
     * @symbol ?getAuxValuesDescription@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   -538687685
     * @vftbl  135
     * @symbol ?_useOn@BucketItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
    /**
     * @hash   -1089888305
     * @symbol ?isBucket@BucketItem@@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @hash   -578141328
     * @symbol ?uniqueAuxValues@BucketItem@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   1678054818
     * @symbol ??0BucketItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BucketFillType@@@Z
     */
    MCAPI BucketItem(std::string const &, int, enum BucketFillType);
    /**
     * @hash   -758735955
     * @symbol ?DRINK_DURATION@BucketItem@@2HB
     */
    MCAPI static int const DRINK_DURATION;

//protected:
    /**
     * @hash   1329833082
     * @symbol ?addBucketEntitySaveData@BucketItem@@IEBAXAEAVActor@@AEAVItemStack@@@Z
     */
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    /**
     * @hash   1370937512
     * @symbol ?readBucketEntitySaveData@BucketItem@@IEBA_NAEAVBlockSource@@PEAVActor@@EVBlockPos@@AEBVItemInstance@@@Z
     */
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    /**
     * @hash   1402304925
     * @symbol ?_canEmptyBucketIntoBlock@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@2@Z
     */
    MCAPI bool _canEmptyBucketIntoBlock(class BlockSource &, class BlockPos const &, class Block const &, class Block const &) const;
    /**
     * @hash   -1876151614
     * @symbol ?_emptyBucket@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@PEAVActor@@AEBVItemStack@@E@Z
     */
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    /**
     * @hash   -571802383
     * @symbol ?_removeBubbleColumn@BucketItem@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _removeBubbleColumn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -700851706
     * @symbol ?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @hash   -602444554
     * @symbol ?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1375318387
     * @symbol ?_tryGetBlock@BucketItem@@AEBAPEBVBlockLegacy@@W4BucketFillType@@@Z
     */
    MCAPI class BlockLegacy const * _tryGetBlock(enum BucketFillType) const;

protected:

private:
    /**
     * @hash   -1934307833
     * @symbol ?mFillTypeToEntityType@BucketItem@@0V?$vector@U?$pair@W4BucketFillType@@W4ActorType@@@std@@V?$allocator@U?$pair@W4BucketFillType@@W4ActorType@@@std@@@2@@std@@B
     */
    MCAPI static std::vector<struct std::pair<enum BucketFillType, enum ActorType>> const mFillTypeToEntityType;

};