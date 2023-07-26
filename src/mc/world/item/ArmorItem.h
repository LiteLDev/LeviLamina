#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ArmorItem : public ::Item {
public:
    // ArmorItem inner types declare
    // clang-format off
    class ArmorMaterial;
    // clang-format on

    // ArmorItem inner types define
    class ArmorMaterial {

    public:
        // prevent constructor by default
        ArmorMaterial& operator=(ArmorMaterial const&) = delete;
        ArmorMaterial(ArmorMaterial const&)            = delete;
        ArmorMaterial()                                = delete;
    };

public:
    // prevent constructor by default
    ArmorItem& operator=(ArmorItem const&) = delete;
    ArmorItem(ArmorItem const&)            = delete;
    ArmorItem()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?isArmor\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isDyeable\@ArmorItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@ArmorItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@ArmorItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&)
        const; // NOLINT
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const; // NOLINT
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 65
     * @symbol ?getToughnessValue\@ArmorItem\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getDamageChance\@ArmorItem\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const; // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 73
     * @symbol ?getColor\@ArmorItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@ArmorItem\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 76
     * @symbol ?clearColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase&) const; // NOLINT
    /**
     * @vftbl 78
     * @symbol ?setColor\@ArmorItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const; // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?buildIdAux\@ArmorItem\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 84
     * @symbol ?use\@ArmorItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?dispense\@ArmorItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ArmorItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@ArmorItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 113
     * @symbol ?getEquipLocation\@ArmorItem\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const; // NOLINT
    /**
     * @vftbl 114
     * @symbol ?getEquipSound\@ArmorItem\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@ArmorItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @vftbl 136
     * @symbol ?getArmorKnockbackResistance\@ArmorItem\@\@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const; // NOLINT
    /**
     * @symbol
     * ??0ArmorItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVArmorMaterial\@0\@HW4ArmorSlot\@\@_N\@Z
     */
    MCAPI ArmorItem(
        std::string const&,
        int,
        class ArmorItem::ArmorMaterial const&,
        int,
        enum class ArmorSlot,
        bool
    ); // NOLINT
    /**
     * @symbol ?isTrimAllowed\@ArmorItem\@\@QEBA_NXZ
     */
    MCAPI bool isTrimAllowed() const; // NOLINT
    /**
     * @symbol ?dispenseArmor\@ArmorItem\@\@SA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@EW4ArmorSlot\@\@\@Z
     */
    MCAPI static bool dispenseArmor(
        class BlockSource&,
        class Container&,
        int,
        class Vec3 const&,
        unsigned char,
        enum class ArmorSlot
    ); // NOLINT
    /**
     * @symbol ?getSlotForItem\@ArmorItem\@\@SA?AW4ArmorSlot\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?isDamageable\@ArmorItem\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?CHAIN\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN; // NOLINT
    /**
     * @symbol ?DIAMOND\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND; // NOLINT
    /**
     * @symbol ?ELYTRA\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA; // NOLINT
    /**
     * @symbol ?GOLD\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD; // NOLINT
    /**
     * @symbol ?IRON\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON; // NOLINT
    /**
     * @symbol ?LEATHER\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER; // NOLINT
    /**
     * @symbol ?NETHERITE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE; // NOLINT
    /**
     * @symbol ?TURTLE\@ArmorItem\@\@2VArmorMaterial\@1\@B
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE; // NOLINT
    /**
     * @symbol ?mHealthPerSlot\@ArmorItem\@\@2QBHB
     */
    MCAPI static int const mHealthPerSlot[]; // NOLINT
};
