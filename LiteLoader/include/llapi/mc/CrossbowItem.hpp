/**
 * @file  CrossbowItem.hpp
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
 * @brief MC class CrossbowItem.
 *
 */
class CrossbowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWITEM
public:
    class CrossbowItem& operator=(class CrossbowItem const &) = delete;
    CrossbowItem(class CrossbowItem const &) = delete;
    CrossbowItem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?getMaxUseDuration\@CrossbowItem\@\@UEBAHPEBVItemStack\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
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
     * @vftbl 62
     * @symbol ?getEnchantSlot\@CrossbowItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
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
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
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
     * @vftbl 84
     * @symbol ?use\@CrossbowItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl 86
     * @symbol ?useTimeDepleted\@CrossbowItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@CrossbowItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl 112
     * @symbol ?enchantProjectile\@CrossbowItem\@\@UEBAXAEBVItemStackBase\@\@AEAVActor\@\@\@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
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
     * @vftbl 119
     * @symbol ?setIconInfo\@CrossbowItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@CrossbowItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@CrossbowItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl 126
     * @symbol ?canBeCharged\@CrossbowItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl 128
     * @symbol ?playSoundIncrementally\@CrossbowItem\@\@UEBAXAEBVItemStack\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @symbol ??0CrossbowItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CrossbowItem(std::string const &, int);

//private:
    /**
     * @symbol ?_getMaxUseDuration\@CrossbowItem\@\@AEBA?BHAEBVItemStack\@\@\@Z
     */
    MCAPI int const _getMaxUseDuration(class ItemStack const &) const;
    /**
     * @symbol ?_getShootDir\@CrossbowItem\@\@AEBA?AVVec3\@\@AEBVPlayer\@\@M\@Z
     */
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    /**
     * @symbol ?_shootArrow\@CrossbowItem\@\@AEBAXAEBVItemInstance\@\@0AEAVPlayer\@\@\@Z
     */
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    /**
     * @symbol ?_shootFirework\@CrossbowItem\@\@AEBAXAEBVItemInstance\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;

private:
    /**
     * @symbol ?DEFAULT_USE_DURATION\@CrossbowItem\@\@0HB
     */
    MCAPI static int const DEFAULT_USE_DURATION;

};
