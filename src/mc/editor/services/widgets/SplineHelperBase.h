#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Widgets {

class SplineHelperBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplineHelperBase();

    virtual ::std::optional<::std::vector<::Vec3>> calculateInterpolatedPoints(
        ::std::vector<::Vec3> const& controlPoints,
        int const                    maxStepsPerControlSegment
    ) const = 0;
    // NOLINTEND
};

} // namespace Editor::Widgets
