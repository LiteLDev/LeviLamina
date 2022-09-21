/**
 * @file  MC/SharedAmplifiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SharedAmplifiers.
 *
 */
class SharedAmplifiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDAMPLIFIERS
public:
    class SharedAmplifiers& operator=(class SharedAmplifiers const &) = delete;
    SharedAmplifiers(class SharedAmplifiers const &) = delete;
    SharedAmplifiers() = delete;
#endif

public:
    /**
     * @hash   1431220128
     * @symbol ?ABSORPTION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> ABSORPTION;
    /**
     * @hash   -335280392
     * @symbol ?FATAL_POISON@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> FATAL_POISON;
    /**
     * @hash   1651382970
     * @symbol ?HARM@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HARM;
    /**
     * @hash   1901502354
     * @symbol ?HEAL@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HEAL;
    /**
     * @hash   -453375692
     * @symbol ?HUNGER_DURATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_DURATION;
    /**
     * @hash   101734444
     * @symbol ?HUNGER_VALUE@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_VALUE;
    /**
     * @hash   -1140345230
     * @symbol ?POISON@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> POISON;
    /**
     * @hash   -800143768
     * @symbol ?REGENERATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> REGENERATION;
    /**
     * @hash   84599766
     * @symbol ?SATURATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> SATURATION;
    /**
     * @hash   -532845400
     * @symbol ?WITHER@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> WITHER;

};