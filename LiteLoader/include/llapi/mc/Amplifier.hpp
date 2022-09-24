/**
 * @file  Amplifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Amplifier.
 *
 */
class Amplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPLIFIER
public:
    class Amplifier& operator=(class Amplifier const &) = delete;
    Amplifier(class Amplifier const &) = delete;
    Amplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Amplifier();
    /**
     * @hash   370103774
     * @vftbl  1
     * @symbol ?getAmount@Amplifier@@UEBAMHM@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @hash   -465498867
     * @vftbl  2
     * @symbol ?shouldBuff@Amplifier@@UEBA_NHH@Z
     */
    virtual bool shouldBuff(int, int) const;
    /**
     * @hash   1894558331
     * @vftbl  3
     * @symbol ?getTickInterval@Amplifier@@UEBAHH@Z
     */
    virtual int getTickInterval(int) const;

};