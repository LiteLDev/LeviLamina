/**
 * @file  CurseVanishingEnchant.hpp
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
 * @brief MC class CurseVanishingEnchant.
 *
 */
class CurseVanishingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEVANISHINGENCHANT
public:
    class CurseVanishingEnchant& operator=(class CurseVanishingEnchant const &) = delete;
    CurseVanishingEnchant(class CurseVanishingEnchant const &) = delete;
    CurseVanishingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CurseVanishingEnchant();
    /**
     * @hash   -1642969731
     * @vftbl  2
     * @symbol ?getMinCost@CurseVanishingEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   -403929653
     * @vftbl  3
     * @symbol ?getMaxCost@CurseVanishingEnchant@@UEBAHH@Z
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSEVANISHINGENCHANT
    /**
     * @hash   94006745
     * @symbol ?isTreasureOnly@CurseVanishingEnchant@@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @hash   561544418
     * @symbol ??0CurseVanishingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH_N@Z
     */
    MCAPI CurseVanishingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);

};