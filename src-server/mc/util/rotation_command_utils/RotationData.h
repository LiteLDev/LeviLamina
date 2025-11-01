#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/RelativeFloat.h"

namespace RotationCommandUtils {

class RotationData {
public:
    // member variables
    // NOLINTBEGIN
    ::RelativeFloat                  mRotX;
    ::RelativeFloat                  mRotY;
    ::std::optional<::Vec2> mCommandOriginRotation;
    // NOLINTEND
};

} // namespace RotationCommandUtils
