#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
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
    // vIndex: 0
    virtual ~DoorInteractGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit DoorInteractGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class DoorBlock const* _findBlockingDoorAtPos(
        class BlockPos const& bpos,
        class Mob const&      mob,
        class Path*           path,
        ::Direction::Type&    dirIn,
        ::Direction::Type&    dirOut
    );

    // NOLINTEND
};
