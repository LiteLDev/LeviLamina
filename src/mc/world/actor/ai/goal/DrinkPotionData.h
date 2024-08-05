#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DrinkPotionData {
public:
    // prevent constructor by default
    DrinkPotionData(DrinkPotionData const&);
    DrinkPotionData();

public:
    // NOLINTBEGIN
    MCAPI struct DrinkPotionData& operator=(struct DrinkPotionData const&);

    MCAPI ~DrinkPotionData();

    // NOLINTEND
};
