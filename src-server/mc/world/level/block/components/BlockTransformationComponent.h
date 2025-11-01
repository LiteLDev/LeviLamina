#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"

class BlockTransformationComponent {
public:
    // BlockTransformationComponent inner types declare
    // clang-format off
    struct RotationType;
    struct ScaleType;
    // clang-format on

    // BlockTransformationComponent inner types define
    struct RotationType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>     x;
        ::ll::TypedStorage<4, 4, int>     y;
        ::ll::TypedStorage<4, 4, int>     z;
        ::ll::TypedStorage<4, 12, ::Vec3> pivot;
        // NOLINTEND
    };

    struct ScaleType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> value;
        ::ll::TypedStorage<4, 12, ::Vec3> pivot;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mShouldHandleSchematicValidation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mTranslation;
    ::ll::TypedStorage<4, 24, ::BlockTransformationComponent::RotationType> mRotation;
    ::ll::TypedStorage<4, 24, ::BlockTransformationComponent::ScaleType>    mScale;
    ::ll::TypedStorage<4, 64, ::Matrix>                                     mTransformationMatrix;
    // NOLINTEND
};
