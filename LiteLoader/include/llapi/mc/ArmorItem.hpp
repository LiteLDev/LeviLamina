/**
 * @file  ArmorItem.hpp
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
     * @vftbl 12
     * @symbol ?isArmor\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
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
     * @vftbl 18
     * @symbol ?isDyeable\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
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
     * @vftbl 60
     * @symbol ?appendFormattedHovertext\@ArmorItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@ArmorItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 65
     * @symbol ?getToughnessValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 68
     * @symbol ?getDamageChance\@ArmorItem\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const;
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
     * @vftbl 73
     * @symbol ?getColor\@ArmorItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@ArmorItem\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 76
     * @symbol ?clearColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vftbl 78
     * @symbol ?setColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @vftbl 82
     * @symbol ?buildIdAux\@ArmorItem\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vftbl 84
     * @symbol ?use\@ArmorItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl 85
     * @symbol ?dispense\@ArmorItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ArmorItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@ArmorItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl 113
     * @symbol ?getEquipLocation\@ArmorItem\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl 114
     * @symbol ?getEquipSound\@ArmorItem\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
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
     * @vftbl 120
     * @symbol ?getIconInfo\@ArmorItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl 135
     * @symbol ?getArmorKnockbackResistance\@ArmorItem\@\@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const;
    /**
     * @symbol ??0ArmorItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVArmorMaterial\@0\@HW4ArmorSlot\@\@_N\@Z
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum class ArmorSlot, bool);
    /**
     * @symbol ?isTrimAllowed\@ArmorItem\@\@QEBA_NXZ
     */
    MCAPI bool isTrimAllowed() const;
    /**
     * @symbol ?CHAIN\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    /**
     * @symbol ?DIAMOND\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    /**
     * @symbol ?ELYTRA\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    /**
     * @symbol ?GOLD\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    /**
     * @symbol ?IRON\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    /**
     * @symbol ?LEATHER\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    /**
     * @symbol ?NETHERITE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    /**
     * @symbol ?TURTLE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @symbol ?dispenseArmor\@ArmorItem\@\@SA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@EW4ArmorSlot\@\@\@Z
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum class ArmorSlot);
    /**
     * @symbol ?getSlotForItem\@ArmorItem\@\@SA?AW4ArmorSlot\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @symbol ?isDamageable\@ArmorItem\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
    /**
     * @symbol ?mHealthPerSlot\@ArmorItem\@\@2QBHB
     */
    MCAPI static int const mHealthPerSlot[];

};
