#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct RamAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                              mRamDistance;
    ::ll::TypedStorage<4, 4, int>                                                              mMinRamDistance;
    ::ll::TypedStorage<4, 4, float>                                                            mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                                                            mKnockbackHeight;
    ::ll::TypedStorage<4, 4, float>                                                            mBabyKnockbackModifier;
    ::ll::TypedStorage<4, 4, float>                                                            mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                                            mRamSpeed;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnStartTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mPreRamSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mRamImpactSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                        mCooldownTime;
    // NOLINTEND

public:
    // prevent constructor by default
    RamAttackGoalDefinition& operator=(RamAttackGoalDefinition const&);
    RamAttackGoalDefinition(RamAttackGoalDefinition const&);
    RamAttackGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_10::RamAttackGoalDefinition&
    operator=(::SharedTypes::v1_26_10::RamAttackGoalDefinition&&);

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
    MCAPI static float const& DEFAULT_BABY_KNOCKBACK_MODIFIER();

    MCAPI static float const& DEFAULT_KNOCKBACK_FORCE();

    MCAPI static float const& DEFAULT_KNOCKBACK_HEIGHT();

    MCAPI static int const& DEFAULT_MIN_RAM_DISTANCE();

    MCAPI static int const& DEFAULT_RAM_DISTANCE();

    MCAPI static float const& DEFAULT_RAM_SPEED();

    MCAPI static float const& DEFAULT_RUN_SPEED();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
