#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RelativeFloat;
class Vec2;
// clang-format on

namespace RotationCommandUtils {

class RotationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RelativeFloat>          mRotX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>          mRotY;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mCommandOriginRotation;
    // NOLINTEND
};

} // namespace RotationCommandUtils
