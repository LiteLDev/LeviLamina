#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct ToggleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk199793;
    ::ll::UntypedStorage<8, 32>  mUnk563e43;
    ::ll::UntypedStorage<8, 224> mUnk52fb9f;
    ::ll::UntypedStorage<8, 48>  mUnk3b0d20;
    ::ll::UntypedStorage<8, 40>  mUnk8f671d;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleData& operator=(ToggleData const&);
    ToggleData(ToggleData const&);
    ToggleData();
};

} // namespace ScriptModuleMinecraftServerUI
