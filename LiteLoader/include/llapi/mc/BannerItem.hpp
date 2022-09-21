/**
 * @file  MC/BannerItem.hpp
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
 * @brief MC class BannerItem.
 *
 */
class BannerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERITEM
public:
    class BannerItem& operator=(class BannerItem const &) = delete;
    BannerItem(class BannerItem const &) = delete;
    BannerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BannerItem();
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
     * @hash   -1111997609
     * @vftbl  55
     * @symbol ?isWearableThroughLootTable@BannerItem@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @hash   -1476572736
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@BannerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1051333243
     * @vftbl  68
     * @symbol ?isValidAuxValue@BannerItem@@UEBA_NH@Z
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
     * @hash   -405410053
     * @vftbl  96
     * @symbol ?buildDescriptionId@BannerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -185566433
     * @vftbl  135
     * @symbol ?_useOn@BannerItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   195500157
     * @symbol ??0BannerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BannerItem(std::string const &, int);
    /**
     * @hash   1866607660
     * @symbol ?getPatternAndColorPairsFromItemStack@BannerItem@@SA?AV?$vector@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@V?$allocator@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@@2@@std@@AEBVItemStackBase@@@Z
     */
    MCAPI static std::vector<struct std::pair<class gsl::not_null<class BannerPattern const *>, enum ItemColor>> getPatternAndColorPairsFromItemStack(class ItemStackBase const &);

};