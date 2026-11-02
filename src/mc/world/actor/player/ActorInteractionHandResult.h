#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorInteractionHandResult : schar {
    Fail            = 0,
    SuccessMainhand = 1,
    SuccessOffhand  = 2,
};
