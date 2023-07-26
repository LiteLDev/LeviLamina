#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types declare
    // clang-format off

    // clang-format on

    // HorseArmorItem inner types define
    enum class Tier {};

public:
    // prevent constructor by default
    HorseArmorItem& operator=(HorseArmorItem const&) = delete;
    HorseArmorItem(HorseArmorItem const&)            = delete;
    HorseArmorItem()                                 = delete;

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
     * @symbol ?isDyeable\@HorseArmorItem\@\@UEBA_NXZ
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
     * ?appendFormattedHovertext\@HorseArmorItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@HorseArmorItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
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
     * @symbol ?getColor\@HorseArmorItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@HorseArmorItem\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 77
     * @symbol ?clearColor\@HorseArmorItem\@\@UEBAXPEAVCompoundTag\@\@\@Z
     */
    virtual void clearColor(class CompoundTag*) const; // NOLINT
    /**
     * @vftbl 78
     * @symbol ?setColor\@HorseArmorItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
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
     * @vftbl 85
     * @symbol ?dispense\@HorseArmorItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
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
     * @symbol
     * ??0HorseArmorItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHW4Tier\@0\@\@Z
     */
    MCAPI HorseArmorItem(std::string const&, int, int, enum class HorseArmorItem::Tier); // NOLINT
    /**
     * @symbol ?getTier\@HorseArmorItem\@\@QEBA?AW4Tier\@1\@XZ
     */
    MCAPI enum class HorseArmorItem::Tier getTier() const; // NOLINT
    /**
     * @symbol ?mHealthPerTier\@HorseArmorItem\@\@2QBHB
     */
    MCAPI static int const mHealthPerTier[]; // NOLINT

    // private:
    /**
     * @symbol ?_tryEquipHorseArmor\@HorseArmorItem\@\@CA_NPEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static bool _tryEquipHorseArmor(class Actor*, class ItemStack const&); // NOLINT

private:
};
