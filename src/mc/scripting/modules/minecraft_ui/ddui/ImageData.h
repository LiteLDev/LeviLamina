#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct ImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnkc9117e;
    ::ll::UntypedStorage<8, 40>  mUnk177dfa;
    ::ll::UntypedStorage<8, 40>  mUnk36a87c;
    ::ll::UntypedStorage<8, 40>  mUnk5c0874;
    ::ll::UntypedStorage<8, 224> mUnk45831a;
    ::ll::UntypedStorage<8, 40>  mUnke33cf2;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageData& operator=(ImageData const&);
    ImageData(ImageData const&);
    ImageData();
};

} // namespace ScriptModuleMinecraftServerUI
