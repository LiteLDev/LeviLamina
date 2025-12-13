#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class TextureGroupTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc1ed86;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupTracker& operator=(TextureGroupTracker const&);
    TextureGroupTracker(TextureGroupTracker const&);
    TextureGroupTracker();
};

} // namespace mce
