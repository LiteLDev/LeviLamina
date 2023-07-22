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
     * @symbol  ?getAttackValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getAttackValue() const;
    /**
     * @symbol  ?getHealValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getHealValue() const;
    /**
     * @symbol  ?getJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpValue() const;
    /**
     * @symbol  ?getMiningValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getMiningValue() const;
    /**
     * @symbol  ?getSprintJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintJumpValue() const;
    /**
     * @symbol  ?getSprintValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintValue() const;
    /**
     * @symbol  ?getSwimValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSwimValue() const;
    /**
     * @symbol  ?getWalkValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getWalkValue() const;

};