#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct FloodInteractiveToolOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk13e0cf;
    ::ll::UntypedStorage<1, 1>  mUnk67338e;
    ::ll::UntypedStorage<1, 1>  mUnkb635be;
    ::ll::UntypedStorage<8, 40> mUnkfc4ae4;
    ::ll::UntypedStorage<1, 2>  mUnk9eef6c;
    ::ll::UntypedStorage<4, 8>  mUnkbe8405;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodInteractiveToolOptions& operator=(FloodInteractiveToolOptions const&);
    FloodInteractiveToolOptions(FloodInteractiveToolOptions const&);
    FloodInteractiveToolOptions();
};

} // namespace Editor::ScriptModule
