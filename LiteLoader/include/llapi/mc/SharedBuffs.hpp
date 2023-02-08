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
     * @hash   -1194641912
     * @symbol  ?ABSORPTION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> ABSORPTION;
    /**
     * @hash   703097976
     * @symbol  ?FATAL_POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FATAL_POISON;
    /**
     * @hash   -1286186760
     * @symbol  ?FOOD_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FOOD_POSIONING;
    /**
     * @hash   -1048923848
     * @symbol  ?HARM\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HARM;
    /**
     * @hash   -1540914232
     * @symbol  ?HEAL\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HEAL;
    /**
     * @hash   1352872904
     * @symbol  ?POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> POISON;
    /**
     * @hash   -1574933688
     * @symbol  ?PUFFER_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> PUFFER_POSIONING;
    /**
     * @hash   -267783800
     * @symbol  ?REGENERATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> REGENERATION;
    /**
     * @hash   -1452516264
     * @symbol  ?SATURATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> SATURATION;
    /**
     * @hash   663635736
     * @symbol  ?WITHER\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> WITHER;

};