#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ComponentReceiveActionType : ushort {
    ConsumeEvent               = 0,
    FurtherPassEventToControls = 1,
};
