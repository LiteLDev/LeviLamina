/**
 * @file  MC/CurseBindingEnchant.hpp
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
 * @brief MC class CurseBindingEnchant.
 *
 */
class CurseBindingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEBINDINGENCHANT
public:
    class CurseBindingEnchant& operator=(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CurseBindingEnchant();
    /**
     * @hash   519983103
     * @vftbl  2
     * @symbol ?getMinCost@CurseBindingEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   2036605005
     * @vftbl  3
     * @symbol ?getMaxCost@CurseBindingEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSEBINDINGENCHANT
    /**
     * @hash   1515766679
     * @symbol ?isTreasureOnly@CurseBindingEnchant@@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @hash   965869856
     * @symbol ??0CurseBindingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH_N@Z
     */
    MCAPI CurseBindingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);

};