#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class TextFilteringEvent : int {
    FloodingDetectedSqueltchRequired = 0,
    FloodingDetectedKickRequired = 1,
    TextProcessorOffline = 2,
    TextProcessorServiceUnreachable = 3,
    DisabledByPlayer = 4,
};

}
