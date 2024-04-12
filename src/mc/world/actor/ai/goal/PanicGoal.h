#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class PanicGoal : public ::Goal {
public:
    // prevent constructor by default
    PanicGoal& operator=(PanicGoal const&);
    PanicGoal(PanicGoal const&);
    PanicGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PanicGoal@@UEAA@XZ
    virtual ~PanicGoal();

    // vIndex: 1, symbol: ?canUse@PanicGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PanicGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PanicGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PanicGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@PanicGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@PanicGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0PanicGoal@@QEAA@AEAVMob@@M_NW4LevelSoundEvent@Legacy@Puv@@UFloatRange@@11V?$vector@W4ActorDamageCause@@V?$allocator@W4ActorDamageCause@@@std@@@std@@@Z
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
    // symbol: ?_tryGeneratePathEnd@PanicGoal@@AEAA_NXZ
    MCAPI bool _tryGeneratePathEnd();

    // NOLINTEND
};
