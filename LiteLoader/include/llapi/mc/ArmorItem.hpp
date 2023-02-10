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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ArmorItem();
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
     * @hash   311126059
     * @vftbl  12
     * @symbol  ?isArmor\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
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
     * @hash   -642418890
     * @vftbl  18
     * @symbol  ?isDyeable\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
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
     * @hash   -849827859
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@ArmorItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   1148507290
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@ArmorItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -834141974
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -884227273
     * @vftbl  63
     * @symbol  ?getEnchantValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   -650173151
     * @vftbl  64
     * @symbol  ?getArmorValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   1492424590
     * @vftbl  65
     * @symbol  ?getToughnessValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @hash   380339963
     * @vftbl  68
     * @symbol  ?getDamageChance\@ArmorItem\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const;
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
     * @hash   -1380851433
     * @vftbl  73
     * @symbol  ?getColor\@ArmorItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   -1431216442
     * @vftbl  74
     * @symbol  ?hasCustomColor\@ArmorItem\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   -1312643670
     * @vftbl  76
     * @symbol  ?clearColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   -817439788
     * @vftbl  78
     * @symbol  ?setColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @hash   1544117320
     * @vftbl  82
     * @symbol  ?buildIdAux\@ArmorItem\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @hash   1158107116
     * @vftbl  84
     * @symbol  ?use\@ArmorItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   2055241598
     * @vftbl  85
     * @symbol  ?dispense\@ArmorItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -775027856
     * @vftbl  89
     * @symbol  ?hurtActor\@ArmorItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1522014393
     * @vftbl  93
     * @symbol  ?mineBlock\@ArmorItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   1272417401
     * @vftbl  113
     * @symbol  ?getEquipLocation\@ArmorItem\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @hash   -1243555686
     * @vftbl  114
     * @symbol  ?getEquipSound\@ArmorItem\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @hash   -630148199
     * @vftbl  118
     * @symbol  ?getIconInfo\@ArmorItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1832502631
     * @vftbl  133
     * @symbol  ?getArmorKnockbackResistance\@ArmorItem\@\@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const;
    /**
     * @hash   -1485186689
     * @symbol  ??0ArmorItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVArmorMaterial\@0\@HW4ArmorSlot\@\@\@Z
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum class ArmorSlot);
    /**
     * @hash   -672109558
     * @symbol  ?CHAIN\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    /**
     * @hash   2145689552
     * @symbol  ?DIAMOND\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    /**
     * @hash   1415169160
     * @symbol  ?ELYTRA\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    /**
     * @hash   1105812966
     * @symbol  ?GOLD\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    /**
     * @hash   1960753814
     * @symbol  ?IRON\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    /**
     * @hash   -2006856070
     * @symbol  ?LEATHER\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    /**
     * @hash   -1181377332
     * @symbol  ?NETHERITE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    /**
     * @hash   -1182384578
     * @symbol  ?TURTLE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @hash   166144321
     * @symbol  ?dispenseArmor\@ArmorItem\@\@SA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@EW4ArmorSlot\@\@\@Z
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum class ArmorSlot);
    /**
     * @hash   -1624375841
     * @symbol  ?getSlotForItem\@ArmorItem\@\@SA?AW4ArmorSlot\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @hash   -67651139
     * @symbol  ?isDamageable\@ArmorItem\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
    /**
     * @hash   328533872
     * @symbol  ?mHealthPerSlot\@ArmorItem\@\@2QBHB
     */
    MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @hash   1269894053
     * @symbol  ?getTierItem\@ArmorItem\@\@AEBA?AVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};