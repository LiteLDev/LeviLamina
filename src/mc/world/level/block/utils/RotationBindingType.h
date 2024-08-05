#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace BlockTransformationSerializer {

struct RotationBindingType {
public:
    // prevent constructor by default
    RotationBindingType& operator=(RotationBindingType const&);
    RotationBindingType(RotationBindingType const&);
    RotationBindingType();

public:
    // NOLINTBEGIN
    MCAPI void rotationTypeFromVec3(class Vec3 const&);

    // NOLINTEND
};

}; // namespace BlockTransformationSerializer
