#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MakeLoveGoal : public ::Goal {
public:
    // prevent constructor by default
    MakeLoveGoal& operator=(MakeLoveGoal const&);
    MakeLoveGoal(MakeLoveGoal const&);
    MakeLoveGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MakeLoveGoal@@UEAA@XZ
    virtual ~MakeLoveGoal() = default;

    // vIndex: 1, symbol: ?canUse@MakeLoveGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MakeLoveGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MakeLoveGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MakeLoveGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MakeLoveGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MakeLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MakeLoveGoal@@QEAA@AEAVVillagerBase@@@Z
    MCAPI explicit MakeLoveGoal(class VillagerBase& villager);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_breed@MakeLoveGoal@@AEBAXAEAVVillagerBase@@@Z
    MCAPI void _breed(class VillagerBase& partner) const;

    // symbol: ?_findMate@MakeLoveGoal@@AEBAPEAVVillagerBase@@XZ
    MCAPI class VillagerBase* _findMate() const;

    // NOLINTEND
};
