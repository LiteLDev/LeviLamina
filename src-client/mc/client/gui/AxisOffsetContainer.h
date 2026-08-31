#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"

// auto generated forward declare list
// clang-format off
namespace ui { struct AxisOffset; }
// clang-format on

namespace ui {

struct AxisOffsetContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    axisOffsets;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> containerType;
    // NOLINTEND
};

} // namespace ui
