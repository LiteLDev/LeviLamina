#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class DirtyFlag : uint {
    // bitfield representation
    None                 = 0,
    UpdateBinds          = 1u << 0,
    UpdateCurrentFocus   = 1u << 1,
    GlobalLayout         = 1u << 2,
    LayoutChanged        = 1u << 3,
    UpdateToDefaultFocus = 1u << 4,
    All                  = UpdateBinds | UpdateCurrentFocus | GlobalLayout,
};

}
