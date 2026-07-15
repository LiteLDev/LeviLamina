#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/IBlockComponent.h"

struct BlockLeashableComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mLeashKnotOffset;
    // NOLINTEND
};
