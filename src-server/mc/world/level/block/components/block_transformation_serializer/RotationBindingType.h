#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
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
    MCAPI ::Vec3 rotationTypeAsVec3() const;

    MCAPI void rotationTypeFromVec3(::Vec3 const& arr);
    // NOLINTEND

};

}
