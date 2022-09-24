/**
 * @file  ExhaustionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -747233910
     * @symbol ?getAttackValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getAttackValue() const;
    /**
     * @hash   171963562
     * @symbol ?getHealValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getHealValue() const;
    /**
     * @hash   -1840956114
     * @symbol ?getJumpValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getJumpValue() const;
    /**
     * @hash   -1561073318
     * @symbol ?getMiningValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getMiningValue() const;
    /**
     * @hash   -1033386598
     * @symbol ?getSprintJumpValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getSprintJumpValue() const;
    /**
     * @hash   -47024858
     * @symbol ?getSprintValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getSprintValue() const;
    /**
     * @hash   -463114294
     * @symbol ?getSwimValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getSwimValue() const;
    /**
     * @hash   -158094872
     * @symbol ?getWalkValue@ExhaustionComponent@@QEBAMXZ
     */
    MCAPI float getWalkValue() const;

};