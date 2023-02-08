/**
 * @file  TridentChannelingEnchant.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~TridentChannelingEnchant();
    /**
     * @hash   -893069319
     * @vftbl  1
     * @symbol  ?isCompatibleWith\@TridentChannelingEnchant\@\@UEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @hash   -846197615
     * @vftbl  2
     * @symbol  ?getMinCost\@TridentChannelingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   477255775
     * @vftbl  3
     * @symbol  ?getMaxCost\@TridentChannelingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   -2116546215
     * @vftbl  4
     * @symbol  ?getMaxLevel\@TridentChannelingEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   -419588494
     * @symbol  ??0TridentChannelingEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2H_NH\@Z
     */
    MCAPI TridentChannelingEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};