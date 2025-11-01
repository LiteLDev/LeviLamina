#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/block/PortalAxis.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct DimensionTransitionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPortalEntrancePosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>          mPortalEntranceDimension;
    ::ll::TypedStorage<4, 4, ::PortalAxis>             mPortalEntranceAxis;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mExisitingTargetPosition;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& AXIS_TAG();

    MCAPI static ::std::string const& COMPONENT_TAG();

    MCAPI static ::std::string const& DIMENSION_TAG();

    MCAPI static ::std::string const& POSITION_X_TAG();

    MCAPI static ::std::string const& POSITION_Y_TAG();

    MCAPI static ::std::string const& POSITION_Z_TAG();
    // NOLINTEND
};
