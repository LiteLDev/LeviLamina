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

    RotationData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0RotationData@RotationCommandUtils@@QEAA@AEBVRelativeFloat@@0AEBV?$optional@VVec2@@@std@@@Z
    MCAPI RotationData(
        class RelativeFloat const&       x,
        class RelativeFloat const&       y,
        std::optional<class Vec2> const& originRot = std::nullopt
    );
    // NOLINTEND
};

}; // namespace RotationCommandUtils
