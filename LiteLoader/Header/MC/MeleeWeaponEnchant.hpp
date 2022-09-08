/**
 * @file  MeleeWeaponEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   1718586579
     */
    virtual ~MeleeWeaponEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@MeleeWeaponEnchant@@UEBAHH@Z
     * @hash   1731818914
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@MeleeWeaponEnchant@@UEBAHH@Z
     * @hash   -639219664
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ
     * @hash   178296360
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@@Z
     * @hash   1981678612
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vftbl  8
     * @symbol ?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z
     * @hash   807331757
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @hash   -342706045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -339935482
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z
     * @hash   957316659
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    /**
     * @symbol ?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ
     * @hash   -566490161
     */
    MCVAPI bool isMeleeDamageEnchant() const;
#endif
    /**
     * @symbol ??0MeleeWeaponEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   -342638064
     */
    MCAPI MeleeWeaponEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @symbol ?VALID_ENCHANTMENTS@MeleeWeaponEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     * @hash   -31357184
     */
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};