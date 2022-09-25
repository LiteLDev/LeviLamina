/**
 * @file  TridentChannelingEnchant.hpp
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
 * @brief MC class TridentChannelingEnchant.
 *
 */
class TridentChannelingEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTCHANNELINGENCHANT
public:
    class TridentChannelingEnchant& operator=(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TridentChannelingEnchant();
    /**
     * @hash   -1577378199
     * @vftbl  1
     * @symbol ?isCompatibleWith@TridentChannelingEnchant@@UEBA_NW4Type@Enchant@@@Z
     */
    virtual bool isCompatibleWith(enum Enchant::Type) const;
    /**
     * @hash   64169217
     * @vftbl  2
     * @symbol ?getMinCost@TridentChannelingEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   1405335759
     * @vftbl  3
     * @symbol ?getMaxCost@TridentChannelingEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   2072480441
     * @vftbl  4
     * @symbol ?getMaxLevel@TridentChannelingEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   -1103897374
     * @symbol ??0TridentChannelingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     */
    MCAPI TridentChannelingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};