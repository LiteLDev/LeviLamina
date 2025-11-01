#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Widgets {

enum class WidgetComponentType : int {
    Entity = 0,
    Text = 1,
    Gizmo = 2,
    GuideSensor = 3,
    Spline = 4,
    RenderPrim = 5,
    Clipboard = 6,
    BoundingBox = 7,
    VolumeOutline = 8,
    Grid = 9,
};

}
