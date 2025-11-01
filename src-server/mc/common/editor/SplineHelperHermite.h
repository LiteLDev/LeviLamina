#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/SplineHelperBase.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Widgets {

class SplineHelperHermite : public ::Editor::Widgets::SplineHelperBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::std::vector<::Vec3>> calculateInterpolatedPoints(::std::vector<::Vec3> const& controlPoints, int const maxStepsPerControlSegment) const /*override*/;

    // vIndex: 0
    virtual ~SplineHelperHermite() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::vector<::Vec3>> $calculateInterpolatedPoints(::std::vector<::Vec3> const& controlPoints, int const maxStepsPerControlSegment) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
