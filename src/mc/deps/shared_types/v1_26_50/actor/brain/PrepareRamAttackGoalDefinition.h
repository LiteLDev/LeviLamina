#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRef; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50::Brain::MemoryGoals {

struct PrepareRamAttackGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRef>>
        mTargetEntityMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
                                                                                               mTargetPositionMemory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnEntityMovedTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    PrepareRamAttackGoalDefinition& operator=(PrepareRamAttackGoalDefinition const&);
    PrepareRamAttackGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PrepareRamAttackGoalDefinition(::SharedTypes::v1_26_50::Brain::MemoryGoals::PrepareRamAttackGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_50::Brain::MemoryGoals::PrepareRamAttackGoalDefinition&
    operator=(::SharedTypes::v1_26_50::Brain::MemoryGoals::PrepareRamAttackGoalDefinition&&);

    MCAPI ~PrepareRamAttackGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_50::Brain::MemoryGoals::PrepareRamAttackGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::Brain::MemoryGoals
