/**
 * @file  TridentItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../Item.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~TridentItem();
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
     * @hash   -1712106599
     * @vftbl  23
     * @symbol  ?isThrowable\@TridentItem\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   -1271446058
     * @vftbl  47
     * @symbol  ?getMaxDamage\@TridentItem\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -41378445
     * @vftbl  48
     * @symbol  ?getAttackDamage\@TridentItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
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
     * @hash   -102602479
     * @vftbl  55
     * @symbol  ?canDestroyInCreative\@TridentItem\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   684638138
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@TridentItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   2147107975
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@TridentItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -1635837100
     * @vftbl  63
     * @symbol  ?getEnchantValue\@TridentItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
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
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
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
     * @hash   -385170711
     * @vftbl  84
     * @symbol  ?use\@TridentItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   311853569
     * @vftbl  85
     * @symbol  ?dispense\@TridentItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   281443303
     * @vftbl  87
     * @symbol  ?releaseUsing\@TridentItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   1810599571
     * @vftbl  89
     * @symbol  ?hurtActor\@TridentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -1799282589
     * @symbol  ??0TridentItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI TridentItem(std::string const &, int);
    /**
     * @hash   399084733
     * @symbol  ?CHARGE_THRESHOLD_TIME\@TridentItem\@\@2HB
     */
    MCAPI static int const CHARGE_THRESHOLD_TIME;
    /**
     * @hash   215071923
     * @symbol  ?THROW_THRESHOLD_TIME\@TridentItem\@\@2HB
     */
    MCAPI static int const THROW_THRESHOLD_TIME;

//private:
    /**
     * @hash   -1970426911
     * @symbol  ?_setupProjectile\@TridentItem\@\@AEBAPEAVActor\@\@PEAV2\@VItemStack\@\@_N\@Z
     */
    MCAPI class Actor * _setupProjectile(class Actor *, class ItemStack, bool) const;

private:

};