#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/FlingGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/PanGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/TapGestureParameters.h"

namespace OreUI {

struct GestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::OreUI::TapGestureParameters>   tapParameters;
    ::ll::TypedStorage<8, 24, ::OreUI::FlingGestureParameters> flingParameters;
    ::ll::TypedStorage<4, 12, ::OreUI::PanGestureParameters>   panParameters;
    // NOLINTEND
};

} // namespace OreUI
