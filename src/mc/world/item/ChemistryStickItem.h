#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChemistryStickItem : public ::Item {

public:
    // prevent constructor by default
    ChemistryStickItem& operator=(ChemistryStickItem const&) = delete;
    ChemistryStickItem(ChemistryStickItem const&)            = delete;
    ChemistryStickItem()                                     = delete;

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
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 30
     * @symbol ?setMaxDamage\@ChemistryStickItem\@\@UEAAAEAVItem\@\@H\@Z
     */
    virtual class Item& setMaxDamage(int); // NOLINT
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
     * @vftbl 61
     * @symbol ?isValidRepairItem\@ChemistryStickItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&)
        const; // NOLINT
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
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
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
     * @vftbl 84
     * @symbol ?use\@ChemistryStickItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 86
     * @symbol
     * ?useTimeDepleted\@ChemistryStickItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ChemistryStickItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@ChemistryStickItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?inventoryTick\@ChemistryStickItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const; // NOLINT
    /**
     * @vftbl 105
     * @symbol ?fixupCommon\@ChemistryStickItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase&) const; // NOLINT
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYSTICKITEM
    /**
     * @symbol ?showsDurabilityInCreative\@ChemistryStickItem\@\@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const; // NOLINT
    /**
     * @symbol ?uniqueAuxValues\@ChemistryStickItem\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChemistryStickItem(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ChemistryStickItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ChemistryStickItem(std::string const&, int); // NOLINT
    /**
     * @symbol ?getColorType\@ChemistryStickItem\@\@SA?AW4ItemColor\@\@H\@Z
     */
    MCAPI static enum class ItemColor getColorType(int); // NOLINT
    /**
     * @symbol ?isActive\@ChemistryStickItem\@\@SA_NH\@Z
     */
    MCAPI static bool isActive(int); // NOLINT
    /**
     * @symbol ?isChemistryStick\@ChemistryStickItem\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isChemistryStick(class ItemStackBase const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_getColorName\@ChemistryStickItem\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string _getColorName(int) const; // NOLINT

    // private:
    /**
     * @symbol ?_storeActivationTimestamp\@ChemistryStickItem\@\@AEBAXAEAVItemStack\@\@_KH\@Z
     */
    MCAPI void _storeActivationTimestamp(class ItemStack&, unsigned __int64, int) const; // NOLINT

protected:
private:
    /**
     * @symbol
     * ?ACTIVATION_TIMESTAMP_TAG\@ChemistryStickItem\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG; // NOLINT
    /**
     * @symbol ?ACTIVE_BIT\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const ACTIVE_BIT; // NOLINT
    /**
     * @symbol ?COLOR_BITS\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const COLOR_BITS; // NOLINT
    /**
     * @symbol ?COLOR_MASK\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const COLOR_MASK; // NOLINT
    /**
     * @symbol ?DAMAGE_BITS\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_BITS; // NOLINT
    /**
     * @symbol ?DAMAGE_MASK\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_MASK; // NOLINT
    /**
     * @symbol ?DAMAGE_START_BIT\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_START_BIT; // NOLINT
};
