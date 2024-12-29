#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/RelativeFloat.h"

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
    ::RelativeFloat         mRotX;
    ::RelativeFloat         mRotY;
    ::std::optional<::Vec2> mCommandOriginRotation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RotationData(
        ::RelativeFloat const&         rotX,
        ::RelativeFloat const&         rotY,
        ::std::optional<::Vec2> const& commandOriginRotation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::RelativeFloat const&         rotX,
        ::RelativeFloat const&         rotY,
        ::std::optional<::Vec2> const& commandOriginRotation
    );
    // NOLINTEND
};

} // namespace RotationCommandUtils
