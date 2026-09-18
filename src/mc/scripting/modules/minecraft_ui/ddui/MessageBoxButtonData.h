#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct MessageBoxButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk6c87a3;
    ::ll::UntypedStorage<8, 224> mUnk130118;
    ::ll::UntypedStorage<8, 48>  mUnkb561a5;
    ::ll::UntypedStorage<8, 48>  mUnkc72a3e;
    ::ll::UntypedStorage<8, 40>  mUnk72c6ce;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageBoxButtonData& operator=(MessageBoxButtonData const&);
    MessageBoxButtonData(MessageBoxButtonData const&);
    MessageBoxButtonData();
};

} // namespace ScriptModuleMinecraftServerUI
