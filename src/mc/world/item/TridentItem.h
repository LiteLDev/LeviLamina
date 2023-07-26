#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class TridentItem : public ::Item {

public:
    // prevent constructor by default
    TridentItem& operator=(TridentItem const&) = delete;
    TridentItem(TridentItem const&)            = delete;
    TridentItem()                              = delete;

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
     * @vftbl 23
     * @symbol ?isThrowable\@TridentItem\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const; // NOLINT
    /**
     * @vftbl 47
     * @symbol ?getMaxDamage\@TridentItem\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const; // NOLINT
    /**
     * @vftbl 48
     * @symbol ?getAttackDamage\@TridentItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const; // NOLINT
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
     * @vftbl 55
     * @symbol ?canDestroyInCreative\@TridentItem\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const; // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@TridentItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@TridentItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@TridentItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const; // NOLINT
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
     * @symbol ?use\@TridentItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?dispense\@TridentItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@TridentItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@TridentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
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
     * @symbol ?CHARGE_THRESHOLD_TIME\@TridentItem\@\@2HB
     */
    MCAPI static int const CHARGE_THRESHOLD_TIME; // NOLINT
    /**
     * @symbol ?THROW_THRESHOLD_TIME\@TridentItem\@\@2HB
     */
    MCAPI static int const THROW_THRESHOLD_TIME; // NOLINT

    // private:
    /**
     * @symbol ?_setupProjectile\@TridentItem\@\@AEBAPEAVActor\@\@PEAV2\@VItemStack\@\@_N\@Z
     */
    MCAPI class Actor* _setupProjectile(class Actor*, class ItemStack, bool) const; // NOLINT

private:
};
