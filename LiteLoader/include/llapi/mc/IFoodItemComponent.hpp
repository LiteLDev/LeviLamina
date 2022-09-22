/**
 * @file  IFoodItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IFoodItemComponent.
 *
 */
class IFoodItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFOODITEMCOMPONENT
public:
    class IFoodItemComponent& operator=(class IFoodItemComponent const &) = delete;
    IFoodItemComponent(class IFoodItemComponent const &) = delete;
    IFoodItemComponent() = delete;
#endif

public:
    /**
     * @hash   -1481469501
     * @symbol ?CAN_ALWAYS_EAT@IFoodItemComponent@@2QBDB
     */
    MCAPI static char const CAN_ALWAYS_EAT[];
    /**
     * @hash   -265837967
     * @symbol ?NUTRITION@IFoodItemComponent@@2QBDB
     */
    MCAPI static char const NUTRITION[];
    /**
     * @hash   73272145
     * @symbol ?SATURATION_MODIFIER@IFoodItemComponent@@2QBDB
     */
    MCAPI static char const SATURATION_MODIFIER[];

};