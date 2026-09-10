#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::Brain::MemorySensors::GameEvents {

enum class GameEventType : uchar {
    All        = 0,
    GoatHorn   = 1,
    Instrument = 2,
    Count      = 3,
};

}
