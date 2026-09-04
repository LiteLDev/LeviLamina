#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/BlendTarget.h"

namespace mce {

struct BlendStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendDestination;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaDestination;
    ::ll::TypedStorage<1, 1, uchar>              colorWriteMask;
    ::ll::TypedStorage<1, 1, bool>               enableBlend;
    ::ll::TypedStorage<1, 1, bool>               enableAlphaToCoverage;
    // NOLINTEND
};

} // namespace mce
