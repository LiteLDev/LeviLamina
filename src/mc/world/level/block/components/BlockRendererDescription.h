#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/BlockRendererName.h"
#include "mc/world/level/block/components/BlockTransformationComponent.h"

struct BlockRendererDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockRendererName>                           mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mOffset;
    ::ll::TypedStorage<4, 24, ::BlockTransformationComponent::RotationType> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mScale;
    // NOLINTEND
};
