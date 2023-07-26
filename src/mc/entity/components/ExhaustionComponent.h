#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExhaustionComponent {

public:
    // prevent constructor by default
    ExhaustionComponent& operator=(ExhaustionComponent const&) = delete;
    ExhaustionComponent(ExhaustionComponent const&)            = delete;
    ExhaustionComponent()                                      = delete;

public:
    /**
     * @symbol ?getAttackValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getAttackValue() const; // NOLINT
    /**
     * @symbol ?getHealValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getHealValue() const; // NOLINT
    /**
     * @symbol ?getJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpValue() const; // NOLINT
    /**
     * @symbol ?getMiningValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getMiningValue() const; // NOLINT
    /**
     * @symbol ?getSprintJumpValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintJumpValue() const; // NOLINT
    /**
     * @symbol ?getSprintValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSprintValue() const; // NOLINT
    /**
     * @symbol ?getSwimValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getSwimValue() const; // NOLINT
    /**
     * @symbol ?getWalkValue\@ExhaustionComponent\@\@QEBAMXZ
     */
    MCAPI float getWalkValue() const; // NOLINT
};
