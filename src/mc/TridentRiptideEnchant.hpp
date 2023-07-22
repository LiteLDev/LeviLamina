/**
 * @file  TridentRiptideEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~TridentRiptideEnchant();
    /**
     * @vftbl  1
     * @symbol  ?isCompatibleWith\@TridentRiptideEnchant\@\@UEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @vftbl  2
     * @symbol  ?getMinCost\@TridentRiptideEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol  ?getMaxCost\@TridentRiptideEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?getMaxLevel\@TridentRiptideEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @symbol  ??0TridentRiptideEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2H_NH\@Z
     */
    MCAPI TridentRiptideEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};