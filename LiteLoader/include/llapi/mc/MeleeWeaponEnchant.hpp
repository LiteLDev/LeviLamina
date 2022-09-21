/**
 * @file  MC/MeleeWeaponEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MeleeWeaponEnchant.
 *
 */
class MeleeWeaponEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEWEAPONENCHANT
public:
    class MeleeWeaponEnchant& operator=(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MeleeWeaponEnchant();
    /**
     * @hash   1731818914
     * @vftbl  2
     * @symbol ?getMinCost@MeleeWeaponEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   -639219664
     * @vftbl  3
     * @symbol ?getMaxCost@MeleeWeaponEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   178296360
     * @vftbl  5
     * @symbol ?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   1981678612
     * @vftbl  7
     * @symbol ?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @hash   807331757
     * @vftbl  8
     * @symbol ?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   957316659
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    /**
     * @hash   -566490161
     * @symbol ?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const;
#endif
    /**
     * @hash   -342638064
     * @symbol ??0MeleeWeaponEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI MeleeWeaponEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @hash   -31357184
     * @symbol ?VALID_ENCHANTMENTS@MeleeWeaponEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     */
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};