#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/ChannelTransformAxisType.h"

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]>       mXYZ;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mAxis;
    ::ll::TypedStorage<4, 4, ::ChannelTransformAxisType> mTransformDataType;
    // NOLINTEND
};
