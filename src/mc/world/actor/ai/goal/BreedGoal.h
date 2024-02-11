#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BreedGoal : public ::Goal {
public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&);
    BreedGoal(BreedGoal const&);
    BreedGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreedGoal@@UEAA@XZ
    virtual ~BreedGoal() = default;

    // vIndex: 1, symbol: ?canUse@BreedGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BreedGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 5, symbol: ?stop@BreedGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@BreedGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@BreedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0BreedGoal@@QEAA@AEAVMob@@M@Z
    MCAPI BreedGoal(class Mob& animal, float speed);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isCloseEnoughToBreed@BreedGoal@@AEBA_NVVec3@@VVec2@@01@Z
    MCAPI bool _isCloseEnoughToBreed(class Vec3 pos1, class Vec2 size1, class Vec3 pos2, class Vec2 size2) const;

    // symbol: ?_moveToFreePartner@BreedGoal@@AEBAPEAVMob@@XZ
    MCAPI class Mob* _moveToFreePartner() const;

    // NOLINTEND
};
