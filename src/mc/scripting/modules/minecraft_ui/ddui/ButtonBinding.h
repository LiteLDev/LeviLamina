#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct ButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk39f745;
    ::ll::UntypedStorage<8, 224> mUnk6e7873;
    ::ll::UntypedStorage<8, 32>  mUnka18c28;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonBinding& operator=(ButtonBinding const&);
    ButtonBinding(ButtonBinding const&);
    ButtonBinding();
};

} // namespace ScriptModuleMinecraftServerUI
