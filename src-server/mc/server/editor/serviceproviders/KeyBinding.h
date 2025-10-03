#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

class KeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3c280a;
    ::ll::UntypedStorage<4, 4> mUnk7fbff8;
    ::ll::UntypedStorage<4, 4> mUnk10f476;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBinding& operator=(KeyBinding const&);
    KeyBinding(KeyBinding const&);
    KeyBinding();
};

} // namespace Editor::Input
