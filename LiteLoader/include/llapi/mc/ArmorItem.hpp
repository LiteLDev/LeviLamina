/**
 * @file  MC/ArmorItem.hpp
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
 * @brief MC class ArmorItem.
 *
 */
class ArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ArmorItem();
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
     * @hash   211228187
     * @vftbl  12
     * @symbol ?isArmor@ArmorItem@@UEBA_NXZ
     */
    virtual bool isArmor() const;
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
     * @hash   -1512992634
     * @vftbl  18
     * @symbol ?isDyeable@ArmorItem@@UEBA_NXZ
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
     * @hash   -1719986451
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   277933546
     * @vftbl  62
     * @symbol ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -1704423574
     * @vftbl  63
     * @symbol ?getEnchantSlot@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -1754508873
     * @vftbl  64
     * @symbol ?getEnchantValue@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   -1520454751
     * @vftbl  65
     * @symbol ?getArmorValue@ArmorItem@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   621850846
     * @vftbl  66
     * @symbol ?getToughnessValue@ArmorItem@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -489941637
     * @vftbl  69
     * @symbol ?getDamageChance@ArmorItem@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
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
     * @hash   2043834263
     * @vftbl  74
     * @symbol ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   1993177110
     * @vftbl  75
     * @symbol ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @hash   2112103530
     * @vftbl  77
     * @symbol ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   -1688013532
     * @vftbl  79
     * @symbol ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
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
     * @hash   673897224
     * @vftbl  83
     * @symbol ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @hash   287671756
     * @vftbl  85
     * @symbol ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1185021502
     * @vftbl  86
     * @symbol ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -866914832
     * @vftbl  90
     * @symbol ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1422116521
     * @vftbl  94
     * @symbol ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   402135801
     * @vftbl  114
     * @symbol ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum ActorLocation getEquipLocation() const;
    /**
     * @hash   -2113837286
     * @vftbl  115
     * @symbol ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getEquipSound() const;
    /**
     * @hash   -2115572171
     * @vftbl  122
     * @symbol ?getIcon@ArmorItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1354237370
     * @vftbl  124
     * @symbol ?setIcon@ArmorItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   962221031
     * @vftbl  136
     * @symbol ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const;
    /**
     * @hash   1939545135
     * @symbol ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@@Z
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum ArmorSlot);
    /**
     * @hash   -1570360102
     * @symbol ?CHAIN@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    /**
     * @hash   1247439008
     * @symbol ?DIAMOND@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    /**
     * @hash   516918616
     * @symbol ?ELYTRA@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    /**
     * @hash   207562422
     * @symbol ?GOLD@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    /**
     * @hash   1062503270
     * @symbol ?IRON@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    /**
     * @hash   1389860682
     * @symbol ?LEATHER@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    /**
     * @hash   -2079627876
     * @symbol ?NETHERITE@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    /**
     * @hash   -2080635122
     * @symbol ?TURTLE@ArmorItem@@2VArmorMaterial@1@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @hash   -704075775
     * @symbol ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum ArmorSlot);
    /**
     * @hash   1800340607
     * @symbol ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
     */
    MCAPI static enum ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @hash   -938224883
     * @symbol ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
    /**
     * @hash   -713774416
     * @symbol ?mHealthPerSlot@ArmorItem@@2QBHB
     */
    MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @hash   399320309
     * @symbol ?getTierItem@ArmorItem@@AEBA?AVItemInstance@@XZ
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};