#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Diagnostics {

class MinimapDebugTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3ae726;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapDebugTimer& operator=(MinimapDebugTimer const&);
    MinimapDebugTimer(MinimapDebugTimer const&);
    MinimapDebugTimer();
};

} // namespace Editor::Diagnostics
