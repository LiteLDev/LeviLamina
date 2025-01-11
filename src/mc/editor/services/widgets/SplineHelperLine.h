#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/widgets/SplineHelperBase.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Widgets {

class SplineHelperLine : public ::Editor::Widgets::SplineHelperBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::std::vector<::Vec3>>
    calculateInterpolatedPoints(::std::vector<::Vec3> const& controlPoints, int const maxStepsPerControlSegment) const
        /*override*/;

    // vIndex: 0
    virtual ~SplineHelperLine() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::vector<::Vec3>>
    $calculateInterpolatedPoints(::std::vector<::Vec3> const& controlPoints, int const maxStepsPerControlSegment) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Widgets
