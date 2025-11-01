#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class ViewRequest : uint {
    // bitfield representation
    None = 0,
    Refresh = 1u << 0,
    PointerHeldEventsRequest = 1u << 1,
    PointerHeldEventsCancel = 1u << 2,
    DelayedFocusRefresh = 1u << 3,
    Exit = 1u << 4,
    ConsumeEvent = 1u << 5,
};

}
