#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

class MouseBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk65c8a8;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBinding& operator=(MouseBinding const&);
    MouseBinding(MouseBinding const&);
    MouseBinding();
};

} // namespace Editor::Input
