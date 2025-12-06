#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PanicGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 8, ::Mob*>                                                  mHurtByMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mIgnoreMobDamage;
    ::ll::TypedStorage<1, 1, bool>                                                    mPanicOnAllCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mForceUse;
    ::ll::TypedStorage<1, 1, bool>                                                    mPreferWater;
    ::ll::TypedStorage<1, 1, bool>                                                    mCanTeleportToOwner;
    ::ll::TypedStorage<4, 4, float>                                                   mSpeedMultipler;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                 mTargetPosition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                  mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                                            mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    PanicGoal& operator=(PanicGoal const&);
    PanicGoal(PanicGoal const&);
    PanicGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~PanicGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PanicGoal(
        ::Mob&                                                 mob,
        float                                                  speedMultiplier,
        bool                                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent                 sound,
        ::FloatRange                                           soundIntervalRange,
        bool                                                   forceUse,
        bool                                                   preferWater,
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> damageCauses
    );

    MCAPI ::std::optional<::Vec3> _findWaterPos(int xzDist, int yDist) const;

    MCAPI ::std::optional<::Vec3> _tryGeneratePathEnd() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                                 mob,
        float                                                  speedMultiplier,
        bool                                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent                 sound,
        ::FloatRange                                           soundIntervalRange,
        bool                                                   forceUse,
        bool                                                   preferWater,
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> damageCauses
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCFOLD bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
