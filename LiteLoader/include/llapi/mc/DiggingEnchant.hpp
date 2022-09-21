/**
 * @file  MC/DiggingEnchant.hpp
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
 * @brief MC class DiggingEnchant.
 *
 */
class DiggingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGINGENCHANT
public:
    class DiggingEnchant& operator=(class DiggingEnchant const &) = delete;
    DiggingEnchant(class DiggingEnchant const &) = delete;
    DiggingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DiggingEnchant();
    /**
     * @hash   -1926247451
     * @vftbl  2
     * @symbol ?getMinCost@DiggingEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   1609939587
     * @vftbl  3
     * @symbol ?getMaxCost@DiggingEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   -1387974427
     * @vftbl  5
     * @symbol ?getMaxLevel@DiggingEnchant@@UEBAHXZ
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
     * @hash   92505782
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@DiggingEnchant@@EEBA_NW4Type@Enchant@@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
    /**
     * @hash   96904077
     * @symbol ??0DiggingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI DiggingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @hash   -1639755787
     * @symbol ?VALID_ENCHANTMENTS@DiggingEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     */
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};