#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemoryGoals {

struct WaitGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnCompleteTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    WaitGoalDefinition& operator=(WaitGoalDefinition const&);
    WaitGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WaitGoalDefinition(::SharedTypes::v1_26_30::Brain::MemoryGoals::WaitGoalDefinition const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemoryGoals::WaitGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemoryGoals
