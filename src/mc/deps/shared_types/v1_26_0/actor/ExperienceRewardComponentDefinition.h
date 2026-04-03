#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/actor/ExperienceRewardComponentDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct ExperienceRewardComponentDefinition : public ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ExperienceRewardComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition oldDef,
        ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition&  newDef
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
