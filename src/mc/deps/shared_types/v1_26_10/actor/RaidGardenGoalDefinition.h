#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

struct RaidGardenGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                           mFullDelay;
    ::ll::TypedStorage<4, 4, int>                           mEatDelay;
    ::ll::TypedStorage<4, 4, int>                           mInitialEatDelay;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEatBlocks;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
