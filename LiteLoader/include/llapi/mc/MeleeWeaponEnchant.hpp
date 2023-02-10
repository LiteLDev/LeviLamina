/**
 * @file  MeleeWeaponEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~MeleeWeaponEnchant();
    /**
     * @hash   -1878824126
     * @vftbl  2
     * @symbol  ?getMinCost\@MeleeWeaponEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   45089216
     * @vftbl  3
     * @symbol  ?getMaxCost\@MeleeWeaponEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   862620616
     * @vftbl  5
     * @symbol  ?getMaxLevel\@MeleeWeaponEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   -1628979804
     * @vftbl  7
     * @symbol  ?getDamageBonus\@MeleeWeaponEnchant\@\@UEBAMHAEBVActor\@\@\@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @hash   1491594509
     * @vftbl  8
     * @symbol  ?doPostAttack\@MeleeWeaponEnchant\@\@UEBAXAEAVActor\@\@0H\@Z
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   1641579411
     * @vftbl  14
     * @symbol  ?_isValidEnchantmentTypeForCategory\@MeleeWeaponEnchant\@\@EEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    /**
     * @hash   -466592289
     * @symbol  ?isMeleeDamageEnchant\@MeleeWeaponEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const;
#endif
    /**
     * @hash   341624688
     * @symbol  ??0MeleeWeaponEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH\@Z
     */
    MCAPI MeleeWeaponEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @hash   871675296
     * @symbol  ?VALID_ENCHANTMENTS\@MeleeWeaponEnchant\@\@0V?$vector\@W4Type\@Enchant\@\@V?$allocator\@W4Type\@Enchant\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS;

};