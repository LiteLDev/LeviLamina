#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FloatWanderGoal : public ::Goal {
public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&);
    FloatWanderGoal(FloatWanderGoal const&);
    FloatWanderGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FloatWanderGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canReach(class Vec3 const& targetPos, float dist);

    // NOLINTEND
};
