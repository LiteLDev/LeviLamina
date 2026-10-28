#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct DividerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbbcd5a;
    ::ll::UntypedStorage<8, 48> mUnk27d49f;
    // NOLINTEND

public:
    // prevent constructor by default
    DividerData& operator=(DividerData const&);
    DividerData(DividerData const&);
    DividerData();
};

} // namespace ScriptModuleMinecraftServerUI
