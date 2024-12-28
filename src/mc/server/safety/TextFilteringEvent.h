#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class TextFilteringEvent : int {
    Muted                            = 0,
    FloodingDetectedSqueltchRequired = 1,
    FloodingDetectedKickRequired     = 2,
    TextProcessorOffline             = 3,
    TextProcessorServiceUnreachable  = 4,
    DisabledByPlayer                 = 5,
};

}
