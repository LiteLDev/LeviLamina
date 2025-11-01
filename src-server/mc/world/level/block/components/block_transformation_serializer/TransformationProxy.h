#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/block_transformation_serializer/RotationBindingType.h"

// auto generated forward declare list
// clang-format off
struct BlockTransformationDescription;
// clang-format on

namespace BlockTransformationSerializer {

struct TransformationProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mTranslation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScaleValue;
    ::ll::TypedStorage<4, 12, ::Vec3> mScalePivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotationPivot;
    ::ll::TypedStorage<4, 12, ::BlockTransformationSerializer::RotationBindingType> mRotation;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void from(::BlockTransformationDescription& desc, ::BlockTransformationSerializer::TransformationProxy proxy);
    // NOLINTEND

};

}
