#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemoryGoals {

struct MeleeAttackGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
                                                                                 mTargetMemory;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnKill;
    ::ll::TypedStorage<4, 4, float>                                              mReachMultiplier;
    ::ll::TypedStorage<4, 4, float>                                              mMeleeFov;
    ::ll::TypedStorage<1, 1, bool>                                               mCanSpreadOnFire;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeAttackGoalDefinition();

    MCAPI MeleeAttackGoalDefinition(::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition const&);

    MCAPI ~MeleeAttackGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemoryGoals::MeleeAttackGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemoryGoals
