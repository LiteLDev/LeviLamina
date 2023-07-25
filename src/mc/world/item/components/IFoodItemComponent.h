#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFoodItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFOODITEMCOMPONENT
public:
    IFoodItemComponent& operator=(IFoodItemComponent const&) = delete;
    IFoodItemComponent(IFoodItemComponent const&)            = delete;
    IFoodItemComponent()                                     = delete;
#endif

public:
    /**
     * @symbol ?CAN_ALWAYS_EAT\@IFoodItemComponent\@\@2QBDB
     */
    MCAPI static char const CAN_ALWAYS_EAT[];
    /**
     * @symbol ?NUTRITION\@IFoodItemComponent\@\@2QBDB
     */
    MCAPI static char const NUTRITION[];
    /**
     * @symbol ?SATURATION_MODIFIER\@IFoodItemComponent\@\@2QBDB
     */
    MCAPI static char const SATURATION_MODIFIER[];
};
