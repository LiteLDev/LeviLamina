#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CrossbowItem : public ::Item {

public:
    // prevent constructor by default
    CrossbowItem& operator=(CrossbowItem const&) = delete;
    CrossbowItem(CrossbowItem const&)            = delete;
    CrossbowItem()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getMaxUseDuration\@CrossbowItem\@\@UEBAHPEBVItemStack\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemStack const*) const; // NOLINT
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
     * @vftbl 62
     * @symbol ?getEnchantSlot\@CrossbowItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
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
     * @symbol ?use\@CrossbowItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 86
     * @symbol
     * ?useTimeDepleted\@CrossbowItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const; // NOLINT
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@CrossbowItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @vftbl 112
     * @symbol ?enchantProjectile\@CrossbowItem\@\@UEBAXAEBVItemStackBase\@\@AEAVActor\@\@\@Z
     */
    virtual void enchantProjectile(class ItemStackBase const&, class Actor&) const; // NOLINT
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
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@CrossbowItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@CrossbowItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@CrossbowItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const; // NOLINT
    /**
     * @vftbl 126
     * @symbol ?canBeCharged\@CrossbowItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const; // NOLINT
    /**
     * @vftbl 128
     * @symbol ?playSoundIncrementally\@CrossbowItem\@\@UEBAXAEBVItemStack\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const; // NOLINT
    /**
     * @symbol ??0CrossbowItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CrossbowItem(std::string const&, int); // NOLINT

    // private:
    /**
     * @symbol ?_getMaxUseDuration\@CrossbowItem\@\@AEBA?BHAEBVItemStack\@\@\@Z
     */
    MCAPI int const _getMaxUseDuration(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?_getShootDir\@CrossbowItem\@\@AEBA?AVVec3\@\@AEBVPlayer\@\@M\@Z
     */
    MCAPI class Vec3 _getShootDir(class Player const&, float) const; // NOLINT
    /**
     * @symbol ?_shootArrow\@CrossbowItem\@\@AEBAXAEBVItemInstance\@\@0AEAVPlayer\@\@\@Z
     */
    MCAPI void _shootArrow(class ItemInstance const&, class ItemInstance const&, class Player&) const; // NOLINT
    /**
     * @symbol ?_shootFirework\@CrossbowItem\@\@AEBAXAEBVItemInstance\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _shootFirework(class ItemInstance const&, class Player&) const; // NOLINT

private:
    /**
     * @symbol ?DEFAULT_USE_DURATION\@CrossbowItem\@\@0HB
     */
    MCAPI static int const DEFAULT_USE_DURATION; // NOLINT
};
