#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ExtrudeInteractiveToolOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkad6025;
    ::ll::UntypedStorage<4, 4>  mUnk62a9d7;
    ::ll::UntypedStorage<1, 1>  mUnkcc1faf;
    ::ll::UntypedStorage<1, 1>  mUnkd4926f;
    ::ll::UntypedStorage<8, 24> mUnk472d91;
    ::ll::UntypedStorage<4, 4>  mUnk7725ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtrudeInteractiveToolOptions& operator=(ExtrudeInteractiveToolOptions const&);
    ExtrudeInteractiveToolOptions(ExtrudeInteractiveToolOptions const&);
    ExtrudeInteractiveToolOptions();
};

} // namespace Editor::ScriptModule
