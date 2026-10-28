#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50::Brain::MemoryGoals {

struct RamAttackGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                            mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                                                            mKnockbackHeight;
    ::ll::TypedStorage<4, 4, float>                                                            mBabyKnockbackModifier;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mPreRamSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mRamImpactSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnCollideTriggers;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
        mRamPositionMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    RamAttackGoalDefinition& operator=(RamAttackGoalDefinition const&);
    RamAttackGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RamAttackGoalDefinition(::SharedTypes::v1_26_50::Brain::MemoryGoals::RamAttackGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_50::Brain::MemoryGoals::RamAttackGoalDefinition&
    operator=(::SharedTypes::v1_26_50::Brain::MemoryGoals::RamAttackGoalDefinition&&);

    MCAPI ~RamAttackGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_50::Brain::MemoryGoals::RamAttackGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::Brain::MemoryGoals
