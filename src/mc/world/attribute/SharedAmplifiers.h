#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedAmplifiers {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDAMPLIFIERS
public:
    SharedAmplifiers& operator=(SharedAmplifiers const&) = delete;
    SharedAmplifiers(SharedAmplifiers const&)            = delete;
    SharedAmplifiers()                                   = delete;
#endif

public:
    /**
     * @symbol ?ABSORPTION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> ABSORPTION;
    /**
     * @symbol ?FATAL_POISON\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> FATAL_POISON;
    /**
     * @symbol ?HARM\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HARM;
    /**
     * @symbol ?HEAL\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HEAL;
    /**
     * @symbol ?HUNGER_DURATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_DURATION;
    /**
     * @symbol ?HUNGER_VALUE\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_VALUE;
    /**
     * @symbol ?POISON\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> POISON;
    /**
     * @symbol ?REGENERATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> REGENERATION;
    /**
     * @symbol ?SATURATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> SATURATION;
    /**
     * @symbol ?WITHER\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> WITHER;
};
