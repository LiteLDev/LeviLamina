/**
 * @file  WeaponItem.hpp
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
 * @brief MC class WeaponItem.
 *
 */
class WeaponItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONITEM
public:
    class WeaponItem& operator=(class WeaponItem const &) = delete;
    WeaponItem(class WeaponItem const &) = delete;
    WeaponItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WeaponItem();
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
     * @hash   -620708734
     * @vftbl  45
     * @symbol ?canDestroySpecial@WeaponItem@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -96480775
     * @vftbl  49
     * @symbol ?getAttackDamage@WeaponItem@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   -2127224159
     * @vftbl  50
     * @symbol ?isHandEquipped@WeaponItem@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
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
     * @hash   1689142567
     * @vftbl  56
     * @symbol ?canDestroyInCreative@WeaponItem@@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   91621200
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@WeaponItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   -1937205689
     * @vftbl  62
     * @symbol ?isValidRepairItem@WeaponItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   743178381
     * @vftbl  63
     * @symbol ?getEnchantSlot@WeaponItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -1141023414
     * @vftbl  64
     * @symbol ?getEnchantValue@WeaponItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
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
     * @hash   981168943
     * @vftbl  85
     * @symbol ?use@WeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -765873557
     * @vftbl  89
     * @symbol ?getDestroySpeed@WeaponItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   -498574499
     * @vftbl  90
     * @symbol ?hurtActor@WeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -1186144054
     * @symbol ??0WeaponItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
     */
    MCAPI WeaponItem(std::string const &, int, class Item::Tier const &);

};