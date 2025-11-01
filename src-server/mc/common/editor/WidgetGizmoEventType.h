#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Widgets {

enum class WidgetGizmoEventType : int {
    OriginActivated = 0,
    OriginGrabbed = 1,
    OriginMoved = 2,
    OriginReleased = 3,
    OriginDeactivated = 4,
    CornerGrabbed = 5,
    CornerMoved = 6,
    CornerReleased = 7,
};

}
