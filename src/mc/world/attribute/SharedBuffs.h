#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedBuffs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDBUFFS
public:
    SharedBuffs& operator=(SharedBuffs const&) = delete;
    SharedBuffs(SharedBuffs const&)            = delete;
    SharedBuffs()                              = delete;
#endif

public:
    /**
     * @symbol ?ABSORPTION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> ABSORPTION;
    /**
     * @symbol ?FATAL_POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FATAL_POISON;
    /**
     * @symbol ?FOOD_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FOOD_POSIONING;
    /**
     * @symbol ?HARM\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HARM;
    /**
     * @symbol ?HEAL\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HEAL;
    /**
     * @symbol ?POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> POISON;
    /**
     * @symbol ?PUFFER_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> PUFFER_POSIONING;
    /**
     * @symbol ?REGENERATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> REGENERATION;
    /**
     * @symbol ?SATURATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> SATURATION;
    /**
     * @symbol ?WITHER\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> WITHER;
};
