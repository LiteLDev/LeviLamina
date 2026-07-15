#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/actor/ExperienceRewardComponentDefinition.h"

namespace SharedTypes::v1_26_0 {

struct ExperienceRewardComponentDefinition : public ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void upgrade(
        ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition oldDef,
        ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition&  newDef
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
