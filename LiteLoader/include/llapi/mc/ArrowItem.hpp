/**
 * @file  ArrowItem.hpp
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
 * @brief MC class ArrowItem.
 *
 */
class ArrowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWITEM
public:
    class ArrowItem& operator=(class ArrowItem const &) = delete;
    ArrowItem(class ArrowItem const &) = delete;
    ArrowItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ArrowItem();
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
     * @hash   1767871043
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@ArrowItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   33764130
     * @vftbl  68
     * @symbol ?isValidAuxValue@ArrowItem@@UEBA_NH@Z
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
     * @hash   413342696
     * @vftbl  86
     * @symbol ?dispense@ArrowItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   2007946014
     * @vftbl  96
     * @symbol ?buildDescriptionId@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1892671323
     * @vftbl  97
     * @symbol ?buildEffectDescriptionName@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   1062389519
     * @vftbl  122
     * @symbol ?getIcon@ArrowItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -501508752
     * @vftbl  124
     * @symbol ?setIcon@ArrowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   -1193765062
     * @symbol ??0ArrowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ArrowItem(std::string const &, int);
    /**
     * @hash   656937342
     * @symbol ?applyEffect@ArrowItem@@QEBAXPEAVArrow@@AEBVItemInstance@@@Z
     */
    MCAPI void applyEffect(class Arrow *, class ItemInstance const &) const;

//protected:
    /**
     * @hash   -53043596
     * @symbol ?getMobEffects@ArrowItem@@IEBA?AV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@H@Z
     */
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int) const;

protected:

};