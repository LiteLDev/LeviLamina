/**
 * @file  MultiplyValueAmplifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultiplyValueAmplifier.
 *
 */
class MultiplyValueAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLYVALUEAMPLIFIER
public:
    class MultiplyValueAmplifier& operator=(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MultiplyValueAmplifier();
    /**
     * @hash   2108729867
     * @vftbl  1
     * @symbol ?getAmount@MultiplyValueAmplifier@@UEBAMHM@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @hash   -470676295
     * @symbol ??0MultiplyValueAmplifier@@QEAA@M@Z
     */
    MCAPI MultiplyValueAmplifier(float);

};