/**
 * @file  ShiftedValueAmplifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShiftedValueAmplifier.
 *
 */
class ShiftedValueAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDVALUEAMPLIFIER
public:
    class ShiftedValueAmplifier& operator=(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShiftedValueAmplifier();
    /**
     * @vftbl  1
     * @symbol  ?getAmount\@ShiftedValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @symbol  ??0ShiftedValueAmplifier\@\@QEAA\@HM\@Z
     */
    MCAPI ShiftedValueAmplifier(int, float);

};