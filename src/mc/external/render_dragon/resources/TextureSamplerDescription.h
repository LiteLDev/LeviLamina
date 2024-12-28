#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct TextureSamplerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkbb2197;
    ::ll::UntypedStorage<4, 4> mUnk9c09bd;
    ::ll::UntypedStorage<1, 1> mUnk6fc5bd;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSamplerDescription& operator=(TextureSamplerDescription const&);
    TextureSamplerDescription(TextureSamplerDescription const&);
    TextureSamplerDescription();
};

} // namespace dragon
