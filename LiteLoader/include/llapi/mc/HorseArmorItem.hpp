/**
 * @file  MC/HorseArmorItem.hpp
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
 * @brief MC class HorseArmorItem.
 *
 */
class HorseArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum class Tier;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEARMORITEM
public:
    class HorseArmorItem& operator=(class HorseArmorItem const &) = delete;
    HorseArmorItem(class HorseArmorItem const &) = delete;
    HorseArmorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HorseArmorItem();
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
     * @hash   -561516669
     * @vftbl  18
     * @symbol ?isDyeable@HorseArmorItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
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
     * @hash   -1355670374
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@HorseArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   -1179801922
     * @vftbl  65
     * @symbol ?getArmorValue@HorseArmorItem@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
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
     * @hash   540131396
     * @vftbl  74
     * @symbol ?getColor@HorseArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   1087116825
     * @vftbl  75
     * @symbol ?hasCustomColor@HorseArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @hash   1673488864
     * @vftbl  78
     * @symbol ?clearColor@HorseArmorItem@@UEBAXPEAVCompoundTag@@@Z
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @hash   808867457
     * @vftbl  79
     * @symbol ?setColor@HorseArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @hash   -1080782255
     * @vftbl  86
     * @symbol ?dispense@HorseArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   793226624
     * @symbol ??0HorseArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Tier@0@@Z
     */
    MCAPI HorseArmorItem(std::string const &, int, int, enum HorseArmorItem::Tier);
    /**
     * @hash   917830886
     * @symbol ?getTier@HorseArmorItem@@QEBA?AW4Tier@1@XZ
     */
    MCAPI enum HorseArmorItem::Tier getTier() const;
    /**
     * @hash   -2123272282
     * @symbol ?mHealthPerTier@HorseArmorItem@@2QBHB
     */
    MCAPI static int const mHealthPerTier[];

};