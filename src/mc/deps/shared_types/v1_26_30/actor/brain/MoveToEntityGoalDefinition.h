#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemoryGoals {

struct MoveToEntityGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
                                                                                               mTargetMemory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<4, 4, float>                                                            mSpeedMod;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToEntityGoalDefinition& operator=(MoveToEntityGoalDefinition const&);
    MoveToEntityGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToEntityGoalDefinition(::SharedTypes::v1_26_30::Brain::MemoryGoals::MoveToEntityGoalDefinition const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemoryGoals::MoveToEntityGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemoryGoals
