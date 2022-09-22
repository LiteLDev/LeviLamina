/**
 * @file  FishingEnchant.hpp
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
 * @brief MC class FishingEnchant.
 *
 */
class FishingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGENCHANT
public:
    class FishingEnchant& operator=(class FishingEnchant const &) = delete;
    FishingEnchant(class FishingEnchant const &) = delete;
    FishingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FishingEnchant();
    /**
     * @hash   1074861880
     * @vftbl  2
     * @symbol ?getMinCost@FishingEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   315897110
     * @vftbl  3
     * @symbol ?getMaxCost@FishingEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   -846014494
     * @vftbl  5
     * @symbol ?getMaxLevel@FishingEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
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
     * @hash   -1356093350
     * @symbol ??0FishingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI FishingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

};