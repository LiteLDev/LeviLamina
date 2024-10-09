#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictOpenDoorGoal : public ::Goal {
public:
    // prevent constructor by default
    RestrictOpenDoorGoal& operator=(RestrictOpenDoorGoal const&);
    RestrictOpenDoorGoal(RestrictOpenDoorGoal const&);
    RestrictOpenDoorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RestrictOpenDoorGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit RestrictOpenDoorGoal(class Mob& mob);

    // NOLINTEND
};
