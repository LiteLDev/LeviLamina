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
    // vIndex: 0
    virtual ~MakeLoveGoal() = default;

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

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _breed(class VillagerBase& partner) const;

    MCAPI class VillagerBase* _findMate() const;

    // NOLINTEND
};
