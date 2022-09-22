/**
 * @file  SharedBuffs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1994421960
     * @symbol ?ABSORPTION@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> ABSORPTION;
    /**
     * @hash   -402805448
     * @symbol ?FATAL_POISON@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FATAL_POISON;
    /**
     * @hash   1902877112
     * @symbol ?FOOD_POSIONING@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FOOD_POSIONING;
    /**
     * @hash   2140140024
     * @symbol ?HARM@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HARM;
    /**
     * @hash   1648149640
     * @symbol ?HEAL@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HEAL;
    /**
     * @hash   246969480
     * @symbol ?POISON@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> POISON;
    /**
     * @hash   1614130184
     * @symbol ?PUFFER_POSIONING@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> PUFFER_POSIONING;
    /**
     * @hash   -1373687224
     * @symbol ?REGENERATION@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> REGENERATION;
    /**
     * @hash   1736547608
     * @symbol ?SATURATION@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> SATURATION;
    /**
     * @hash   -442267688
     * @symbol ?WITHER@SharedBuffs@@2V?$shared_ptr@VAttributeBuff@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> WITHER;

};