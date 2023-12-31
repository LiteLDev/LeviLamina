#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DoorInteractGoal : public ::Goal {
public:
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&);
    DoorInteractGoal(DoorInteractGoal const&);
    DoorInteractGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DoorInteractGoal@@UEAA@XZ
    virtual ~DoorInteractGoal();

    // vIndex: 1, symbol: ?canUse@DoorInteractGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DoorInteractGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DoorInteractGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@DoorInteractGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DoorInteractGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DoorInteractGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DoorInteractGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findBlockingDoorAtPos@DoorInteractGoal@@CAPEBVDoorBlock@@AEBVBlockPos@@AEBVMob@@PEAVPath@@AEAW4Type@Direction@@3@Z
    MCAPI static class DoorBlock const* _findBlockingDoorAtPos(
        class BlockPos const& bpos,
        class Mob const&      mob,
        class Path*           path,
        ::Direction::Type&    dirIn,
        ::Direction::Type&    dirOut
    );

    // NOLINTEND
};
