#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ai/goal/Goal.h"

class PanicGoal : public ::Goal {
public:
    // prevent constructor by default
    PanicGoal& operator=(PanicGoal const&);
    PanicGoal(PanicGoal const&);
    PanicGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PanicGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI PanicGoal(
        class Mob&                      mob,
        float                           speedMultiplier,
        bool                            ignoreMobDamage,
        ::Puv::Legacy::LevelSoundEvent  sound,
        struct FloatRange               soundIntervalRange,
        bool                            forceUse,
        bool                            preferWater,
        std::vector<::ActorDamageCause> damageCauses
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryGeneratePathEnd();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Mob&                      mob,
        float                           speedMultiplier,
        bool                            ignoreMobDamage,
        ::Puv::Legacy::LevelSoundEvent  sound,
        struct FloatRange               soundIntervalRange,
        bool                            forceUse,
        bool                            preferWater,
        std::vector<::ActorDamageCause> damageCauses
    );

    MCAPI void dtor$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
