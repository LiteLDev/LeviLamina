#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct SliderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkac8b8d;
    ::ll::UntypedStorage<8, 32>  mUnk7a9a7b;
    ::ll::UntypedStorage<8, 40>  mUnkb26da5;
    ::ll::UntypedStorage<8, 40>  mUnk7282df;
    ::ll::UntypedStorage<8, 40>  mUnk9ae687;
    ::ll::UntypedStorage<8, 224> mUnkc1af50;
    ::ll::UntypedStorage<8, 48>  mUnk7bce90;
    ::ll::UntypedStorage<8, 40>  mUnka13f8b;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderData& operator=(SliderData const&);
    SliderData(SliderData const&);
    SliderData();
};

} // namespace ScriptModuleMinecraftServerUI
