#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTransformationSerializer {

struct RotationBindingType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void rotationTypeFromVec3(::Vec3 const& arr);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::BlockTransformationSerializer::RotationBindingType getRotationTypeFromVec3(::Vec3 const& arr);

    MCAPI static ::Vec3 getVec3FromXYZRotation(int x, int y, int z);

    MCAPI static bool isAxisAligned(::Vec3 const& rotation);
    // NOLINTEND
};

} // namespace BlockTransformationSerializer
