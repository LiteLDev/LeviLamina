#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_40/actor/MeleeAttackBaseGoalDefinition.h"

namespace SharedTypes::v1_26_40 {

struct MeleeBoxAttackGoalDefinition : public ::SharedTypes::v1_26_40::MeleeAttackBaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHorizontalReach;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
