/**
 * @file  SwiftSneakEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SwiftSneakEnchant.
 *
 */
class SwiftSneakEnchant : public Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIFTSNEAKENCHANT
public:
    class SwiftSneakEnchant& operator=(class SwiftSneakEnchant const &) = delete;
    SwiftSneakEnchant(class SwiftSneakEnchant const &) = delete;
    SwiftSneakEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SwiftSneakEnchant();
    /**
     * @hash   1002789009
     * @vftbl  2
     * @symbol  ?getMinCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   1298438111
     * @vftbl  3
     * @symbol  ?getMaxCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   333463865
     * @vftbl  5
     * @symbol  ?getMaxLevel\@SwiftSneakEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIFTSNEAKENCHANT
    /**
     * @hash   -1961745619
     * @symbol  ?isDiscoverable\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @hash   -1579509227
     * @symbol  ?isTreasureOnly\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @hash   -916916767
     * @symbol  ??0SwiftSneakEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH\@Z
     */
    MCAPI SwiftSneakEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   1047304351
     * @symbol  ?getExtraSneakingMovementFactor\@SwiftSneakEnchant\@\@SAMAEBVActor\@\@\@Z
     */
    MCAPI static float getExtraSneakingMovementFactor(class Actor const &);
    /**
     * @hash   -2006697795
     * @symbol  ?getLevel\@SwiftSneakEnchant\@\@SAHAEBVActor\@\@\@Z
     */
    MCAPI static int getLevel(class Actor const &);

};