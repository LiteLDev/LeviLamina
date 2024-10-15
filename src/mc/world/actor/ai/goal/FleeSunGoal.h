#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/FindCoverGoal.h"

class FleeSunGoal : public ::FindCoverGoal {
public:
    // prevent constructor by default
    FleeSunGoal& operator=(FleeSunGoal const&);
    FleeSunGoal(FleeSunGoal const&);
    FleeSunGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FleeSunGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI FleeSunGoal(class Mob& mob, float speed);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob, float speed);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    // NOLINTEND
};
