#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct ToolCapability {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b189d;
    ::ll::UntypedStorage<4, 4>  mUnk4c6fc7;
    // NOLINTEND

public:
    // prevent constructor by default
    ToolCapability& operator=(ToolCapability const&);
    ToolCapability(ToolCapability const&);
    ToolCapability();
};

} // namespace Editor::InteractiveTools
