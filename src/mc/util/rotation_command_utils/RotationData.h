#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class RelativeFloat;
class Vec2;
// clang-format on

namespace RotationCommandUtils {

class RotationData {
public:
    RelativeFloat       mRotX;
    RelativeFloat       mRotY;
    std::optional<Vec2> mCommandOriginRotation;
};

}; // namespace RotationCommandUtils
