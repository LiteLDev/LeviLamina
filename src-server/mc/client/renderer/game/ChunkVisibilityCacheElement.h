#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkVisibilityCacheElement {
public:
    // ChunkVisibilityCacheElement inner types declare
    // clang-format off
    struct CullerDistanceField;
    struct CullerManhattan;
    struct CullerShadow;
    // clang-format on

    // ChunkVisibilityCacheElement inner types define
    struct CullerDistanceField {};

    struct CullerManhattan {};

    struct CullerShadow {};
};
