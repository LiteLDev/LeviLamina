#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct FloatRange;
// clang-format on

class PanicGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7e66ed;
    ::ll::UntypedStorage<8, 8>  mUnk352ac3;
    ::ll::UntypedStorage<8, 24> mUnkefa8a5;
    ::ll::UntypedStorage<1, 1>  mUnk74a040;
    ::ll::UntypedStorage<1, 1>  mUnkff71e3;
    ::ll::UntypedStorage<1, 1>  mUnk3e819c;
    ::ll::UntypedStorage<1, 1>  mUnkfbd188;
    ::ll::UntypedStorage<1, 1>  mUnk280509;
    ::ll::UntypedStorage<4, 4>  mUnk38f933;
    ::ll::UntypedStorage<4, 12> mUnkac8e5a;
    ::ll::UntypedStorage<4, 4>  mUnkf98514;
    ::ll::UntypedStorage<4, 8>  mUnk7bc3f7;
    ::ll::UntypedStorage<8, 8>  mUnk148c24;
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
        ::Mob&                                 mob,
        float                                  speedMultiplier,
        bool                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   forceUse,
        bool                                   preferWater,
        ::std::vector<::ActorDamageCause>      damageCauses
    );

    MCAPI ::std::optional<::Vec3> _findWaterPos(int xzDist, int yDist) const;

    MCAPI bool _shouldTryToMoveAway();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speedMultiplier,
        bool                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   forceUse,
        bool                                   preferWater,
        ::std::vector<::ActorDamageCause>      damageCauses
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
