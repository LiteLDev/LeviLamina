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
    // prevent constructor by default
    RotationData& operator=(RotationData const&);
    RotationData(RotationData const&);
    RotationData();

public:
    // NOLINTBEGIN
    MCAPI
    RotationData(class RelativeFloat const& rotX, class RelativeFloat const& rotY, std::optional<class Vec2> const&);

    // NOLINTEND
};

}; // namespace RotationCommandUtils
