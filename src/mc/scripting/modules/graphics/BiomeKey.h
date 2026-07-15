#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleServerGraphics {

struct BiomeKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfe2e6d;
    ::ll::UntypedStorage<8, 32> mUnkbf7ae3;
    ::ll::UntypedStorage<8, 40> mUnk190534;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeKey& operator=(BiomeKey const&);
    BiomeKey(BiomeKey const&);
    BiomeKey();
};

} // namespace ScriptModuleServerGraphics
