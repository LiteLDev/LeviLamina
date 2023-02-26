/**
 * @file  SharedBuffs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SharedBuffs.
 *
 */
class SharedBuffs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDBUFFS
public:
    class SharedBuffs& operator=(class SharedBuffs const &) = delete;
    SharedBuffs(class SharedBuffs const &) = delete;
    SharedBuffs() = delete;
#endif

public:
    /**
     * @symbol  ?ABSORPTION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> ABSORPTION;
    /**
     * @symbol  ?FATAL_POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FATAL_POISON;
    /**
     * @symbol  ?FOOD_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FOOD_POSIONING;
    /**
     * @symbol  ?HARM\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HARM;
    /**
     * @symbol  ?HEAL\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HEAL;
    /**
     * @symbol  ?POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> POISON;
    /**
     * @symbol  ?PUFFER_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> PUFFER_POSIONING;
    /**
     * @symbol  ?REGENERATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> REGENERATION;
    /**
     * @symbol  ?SATURATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> SATURATION;
    /**
     * @symbol  ?WITHER\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> WITHER;

};