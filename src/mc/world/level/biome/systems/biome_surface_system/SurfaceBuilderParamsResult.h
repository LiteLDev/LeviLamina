#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace BiomeSurfaceSystem {

struct SurfaceBuilderParamsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, ::std::array<uchar, 256>>                                  mSurfaceBiomeIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<::ISurfaceBuilder::SurfaceBuilderParameters>> mSurfaceBuilderParams;
    ::ll::TypedStorage<1, 1, bool>                                                        mAnythingUsesDepthValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SurfaceBuilderParamsResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BiomeSurfaceSystem
