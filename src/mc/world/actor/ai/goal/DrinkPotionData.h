#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DrinkPotionData {

public:
    // prevent constructor by default
    DrinkPotionData(DrinkPotionData const&) = delete;
    DrinkPotionData()                       = delete;

public:
    /**
     * @symbol ??4DrinkPotionData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct DrinkPotionData& operator=(struct DrinkPotionData const&); // NOLINT
    /**
     * @symbol ??1DrinkPotionData\@\@QEAA\@XZ
     */
    MCAPI ~DrinkPotionData(); // NOLINT
};
