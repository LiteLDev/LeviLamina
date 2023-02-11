/**
 * @file  ExhaustionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionComponent.
 *
 */
class ExhaustionComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONCOMPONENT
public:
    class ExhaustionComponent& operator=(class ExhaustionComponent const &) = delete;
    ExhaustionComponent(class ExhaustionComponent const &) = delete;
    ExhaustionComponent() = delete;
#endif

public:
    /**
     * @hash   123063066
     * @symbol  ?getAttackValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getAttackValue() const;
    /**
     * @hash   437491706
     * @symbol  ?getHealValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getHealValue() const;
    /**
     * @hash   -1575427970
     * @symbol  ?getJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpValue() const;
    /**
     * @hash   -1295575926
     * @symbol  ?getMiningValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getMiningValue() const;
    /**
     * @hash   -767889206
     * @symbol  ?getSprintJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintJumpValue() const;
    /**
     * @hash   -972783066
     * @symbol  ?getSprintValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintValue() const;
    /**
     * @hash   -212454742
     * @symbol  ?getSwimValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSwimValue() const;
    /**
     * @hash   -997455336
     * @symbol  ?getWalkValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getWalkValue() const;

};