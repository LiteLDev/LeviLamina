#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/RelativeFloat.h"

namespace RotationCommandUtils {

class RotationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mRotX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mRotY;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mCommandOriginRotation;
    // NOLINTEND

};

}
