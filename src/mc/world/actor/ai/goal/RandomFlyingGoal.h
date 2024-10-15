#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomFlyingGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    RandomFlyingGoal& operator=(RandomFlyingGoal const&);
    RandomFlyingGoal(RandomFlyingGoal const&);
    RandomFlyingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomFlyingGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10
    virtual bool _setWantedPosition();

    MCAPI RandomFlyingGoal(class Mob& mob, float speed, int xzDist, int yDist, bool canLandOnTrees);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _getTreePos(class Vec3& result) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob, float speed, int xzDist, int yDist, bool canLandOnTrees);

    MCAPI bool _setWantedPosition$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    // NOLINTEND
};
