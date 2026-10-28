#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/RotationSpace.h"

namespace SharedTypes::v1_21_100 {

struct CameraThirdPersonBoomDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mStartingRadius;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mStartingOrientation;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_100::RotationSpace> mRotSpace;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
