#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_60 {

struct DashActionComponentDefinition {
public:
    // DashActionComponentDefinition inner types define
    enum class DashDirection : uchar {
        Entity    = 0,
        Passenger = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                                 mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                                 mHorizontalMomentum;
    ::ll::TypedStorage<4, 4, float>                                                                 mVerticalMomentum;
    ::ll::TypedStorage<1, 1, bool>                                                                  mCanDashUnderwater;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_60::DashActionComponentDefinition::DashDirection> mDirection;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CAN_DASH_UNDERWATER_NAME();

    MCAPI static ::std::string_view const& COOLDOWN_SECONDS_NAME();

    MCAPI static ::std::string_view const& DIRECTION_NAME();

    MCAPI static ::std::string_view const& HORIZONTAL_MOMENTUM_NAME();

    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::std::string_view const& VERTICAL_MOMENTUM_NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
