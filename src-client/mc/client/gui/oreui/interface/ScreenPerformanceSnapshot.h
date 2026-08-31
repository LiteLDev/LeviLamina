#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

namespace OreUI {

struct ScreenPerformanceSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase>                         lastPhase;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> lastFrameTime;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> lastAdvanceDuration;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> meaningfulPaintWithRendering;
    // NOLINTEND
};

} // namespace OreUI
