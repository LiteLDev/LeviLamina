/**
 * @file  MC/TridentRiptideEnchant.hpp
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
 * @brief MC class TridentRiptideEnchant.
 *
 */
class TridentRiptideEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTRIPTIDEENCHANT
public:
    class TridentRiptideEnchant& operator=(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TridentRiptideEnchant();
    /**
     * @hash   -71504115
     * @vftbl  1
     * @symbol ?isCompatibleWith@TridentRiptideEnchant@@UEBA_NW4Type@Enchant@@@Z
     */
    virtual bool isCompatibleWith(enum Enchant::Type) const;
    /**
     * @hash   -739956235
     * @vftbl  2
     * @symbol ?getMinCost@TridentRiptideEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   -1874203357
     * @vftbl  3
     * @symbol ?getMaxCost@TridentRiptideEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -664845963
     * @vftbl  5
     * @symbol ?getMaxLevel@TridentRiptideEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   -1409847506
     * @symbol ??0TridentRiptideEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     */
    MCAPI TridentRiptideEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};