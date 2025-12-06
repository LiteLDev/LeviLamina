#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct WidgetComponentStateChangePayload {
public:
    // WidgetComponentStateChangePayload inner types declare
    // clang-format off
    struct ComponentStateBase;
    struct ComponentStateBoundingBox;
    struct ComponentStateClipboard;
    struct ComponentStateEntity;
    struct ComponentStateGizmo;
    struct ComponentStateGrid;
    struct ComponentStateNULL;
    struct ComponentStateSpline;
    struct ComponentStateText;
    struct ComponentStateVolumeOutline;
    struct ComponentStateVolumeOutlineVolumeUpdate;
    // clang-format on

    // WidgetComponentStateChangePayload inner types define
    enum class WidgetComponentStateVariantType : uint {};

    struct ComponentStateBase {};

    struct ComponentStateBoundingBox {};

    struct ComponentStateClipboard {};

    struct ComponentStateEntity {};

    struct ComponentStateGizmo {};

    struct ComponentStateGrid {};

    struct ComponentStateNULL {};

    struct ComponentStateSpline {};

    struct ComponentStateText {};

    struct ComponentStateVolumeOutline {};

    struct ComponentStateVolumeOutlineVolumeUpdate {};
};

} // namespace Editor::Network
