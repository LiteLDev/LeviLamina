#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ClockSpriteCalculator;
class CompassSpriteCalculator;
// clang-format on

namespace ItemBlockActorHelpers {

struct SpriteCalculatorRefs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClockSpriteCalculator&> mClockSpriteCalc;
    ::ll::TypedStorage<8, 8, ::CompassSpriteCalculator&> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 8, ::CompassSpriteCalculator&> mRecoveryCompassSpriteCalc;
    // NOLINTEND

public:
    // prevent constructor by default
    SpriteCalculatorRefs& operator=(SpriteCalculatorRefs const&);
    SpriteCalculatorRefs(SpriteCalculatorRefs const&);
    SpriteCalculatorRefs();

};

}
