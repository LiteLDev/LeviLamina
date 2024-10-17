#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BarterGoal : public ::Goal {
public:
    // prevent constructor by default
    BarterGoal& operator=(BarterGoal const&);
    BarterGoal(BarterGoal const&);
    BarterGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BarterGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit BarterGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Vec3 _getThrowVector();

    MCAPI void _sendBarterEventPacket(class BarterComponent* barterComponent);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void tick$();

    // NOLINTEND
};
