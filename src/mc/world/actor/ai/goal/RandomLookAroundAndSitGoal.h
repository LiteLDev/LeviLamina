#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomLookAroundGoal.h"

class RandomLookAroundAndSitGoal : public ::RandomLookAroundGoal {
public:
    // prevent constructor by default
    RandomLookAroundAndSitGoal& operator=(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomLookAroundAndSitGoal() = default;

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

    MCAPI RandomLookAroundAndSitGoal(class Mob&, bool, bool, int, int, float, float, int, int, float, int);

    // NOLINTEND
};
