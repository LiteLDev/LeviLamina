/**
 * @file  MC/CrossbowItem.hpp
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CrossbowItem();
    /**
     * @hash   1481369491
     * @vftbl  6
     * @symbol ?getMaxUseDuration@CrossbowItem@@UEBAHPEBVItemStack@@@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
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
     * @hash   -68605761
     * @vftbl  63
     * @symbol ?getEnchantSlot@CrossbowItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
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
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @hash   -1455630303
     * @vftbl  85
     * @symbol ?use@CrossbowItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1323110803
     * @vftbl  87
     * @symbol ?useTimeDepleted@CrossbowItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   -393144081
     * @vftbl  88
     * @symbol ?releaseUsing@CrossbowItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   -1542654353
     * @vftbl  113
     * @symbol ?enchantProjectile@CrossbowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @hash   -1204717000
     * @vftbl  119
     * @symbol ?getAnimationFrameFor@CrossbowItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   405704976
     * @vftbl  122
     * @symbol ?getIcon@CrossbowItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1714456735
     * @vftbl  124
     * @symbol ?setIcon@CrossbowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   1261487960
     * @vftbl  127
     * @symbol ?canBeCharged@CrossbowItem@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -2097363891
     * @vftbl  129
     * @symbol ?playSoundIncrementally@CrossbowItem@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @hash   -1224650517
     * @symbol ??0CrossbowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI CrossbowItem(std::string const &, int);

//private:
    /**
     * @hash   343378999
     * @symbol ?_getShootDir@CrossbowItem@@AEBA?AVVec3@@AEBVPlayer@@M@Z
     */
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    /**
     * @hash   482486066
     * @symbol ?_shootArrow@CrossbowItem@@AEBAXAEBVItemInstance@@0AEAVPlayer@@@Z
     */
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    /**
     * @hash   800128303
     * @symbol ?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z
     */
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;

private:
    /**
     * @hash   -177414527
     * @symbol ?DEFAULT_USE_DURATION@CrossbowItem@@0HB
     */
    MCAPI static int const DEFAULT_USE_DURATION;

};