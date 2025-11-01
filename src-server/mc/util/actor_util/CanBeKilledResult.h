#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorUtil {

enum class CanBeKilledResult : uchar {
    None                         = 0,
    CanBeKilled                  = 1,
    CreativePlayerCannotBeKilled = 2,
    EduNpcCannotBeKilled         = 3,
};

}
