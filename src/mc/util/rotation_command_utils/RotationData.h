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
    MCAPI RotationData(
        class RelativeFloat const&       rotX,
        class RelativeFloat const&       rotY,
        std::optional<class Vec2> const& commandOriginRotation
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace RotationCommandUtils
