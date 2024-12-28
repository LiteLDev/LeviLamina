#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Widgets {

class SplineHelperBase {
public:
    // prevent constructor by default
    SplineHelperBase& operator=(SplineHelperBase const&);
    SplineHelperBase(SplineHelperBase const&);
    SplineHelperBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplineHelperBase();

    // vIndex: 1
    virtual ::std::optional<::std::vector<::Vec3>>
    calculateInterpolatedPoints(::std::vector<::Vec3> const&, int const) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Widgets
