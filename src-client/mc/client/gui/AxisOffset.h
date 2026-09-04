#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOperation.h"
#include "mc/client/gui/LayoutAxisType.h"

namespace ui {

struct AxisOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisType>      type;
    ::ll::TypedStorage<4, 4, float>                     value;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOperation> operation;
    // NOLINTEND
};

} // namespace ui
