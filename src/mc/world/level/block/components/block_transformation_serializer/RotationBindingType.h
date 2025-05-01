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
    ::ll::UntypedStorage<4, 4> mUnkf82fdf;
    ::ll::UntypedStorage<4, 4> mUnk74a881;
    ::ll::UntypedStorage<4, 4> mUnk6f4c42;
    // NOLINTEND

public:
    // prevent constructor by default
    RotationBindingType& operator=(RotationBindingType const&);
    RotationBindingType(RotationBindingType const&);
    RotationBindingType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 rotationTypeAsVec3() const;

    MCNAPI void rotationTypeFromVec3(::Vec3 const& arr);
    // NOLINTEND
};

} // namespace BlockTransformationSerializer
