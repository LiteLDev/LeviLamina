#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DepthStencilTextureObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk436287;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthStencilTextureObject& operator=(DepthStencilTextureObject const&);
    DepthStencilTextureObject(DepthStencilTextureObject const&);
    DepthStencilTextureObject();
};

} // namespace renoir
