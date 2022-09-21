/**
 * @file  MC/TridentItem.hpp
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
 * @brief MC class TridentItem.
 *
 */
class TridentItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTITEM
public:
    class TridentItem& operator=(class TridentItem const &) = delete;
    TridentItem(class TridentItem const &) = delete;
    TridentItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TridentItem();
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
     * @hash   -1812004471
     * @vftbl  23
     * @symbol ?isThrowable@TridentItem@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   -2131210474
     * @vftbl  48
     * @symbol ?getMaxDamage@TridentItem@@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -250184525
     * @vftbl  49
     * @symbol ?getAttackDamage@TridentItem@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
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
     * @hash   -203223023
     * @vftbl  56
     * @symbol ?canDestroyInCreative@TridentItem@@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   -17845174
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@TridentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   1444517031
     * @vftbl  63
     * @symbol ?getEnchantSlot@TridentItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -1741777740
     * @vftbl  64
     * @symbol ?getEnchantValue@TridentItem@@UEBAHXZ
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
     * @hash   -1087853911
     * @vftbl  85
     * @symbol ?use@TridentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -390691247
     * @vftbl  86
     * @symbol ?dispense@TridentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -421147641
     * @vftbl  88
     * @symbol ?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   1108008627
     * @vftbl  90
     * @symbol ?hurtActor@TridentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1793216771
     * @symbol ??0TridentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI TridentItem(std::string const &, int);
    /**
     * @hash   -645391571
     * @symbol ?CHARGE_THRESHOLD_TIME@TridentItem@@2HB
     */
    MCAPI static int const CHARGE_THRESHOLD_TIME;
    /**
     * @hash   -829404381
     * @symbol ?THROW_THRESHOLD_TIME@TridentItem@@2HB
     */
    MCAPI static int const THROW_THRESHOLD_TIME;

//private:
    /**
     * @hash   1622072449
     * @symbol ?_setupProjectile@TridentItem@@AEBAPEAVActor@@PEAV2@VItemStack@@_N@Z
     */
    MCAPI class Actor * _setupProjectile(class Actor *, class ItemStack, bool) const;

private:

};