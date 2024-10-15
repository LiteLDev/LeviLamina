#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwellGoal : public ::Goal {
public:
    // prevent constructor by default
    SwellGoal& operator=(SwellGoal const&);
    SwellGoal(SwellGoal const&);
    SwellGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwellGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI SwellGoal(class Creeper* creeper, float startSwellDist, float stopSwellDist);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Creeper* creeper, float startSwellDist, float stopSwellDist);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
