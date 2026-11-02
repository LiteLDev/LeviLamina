#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFieldOfViewDegrees;
    ::ll::TypedStorage<4, 4, float> mNearPlane;
    ::ll::TypedStorage<4, 4, float> mFarPlane;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
