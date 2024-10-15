#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

class MeleeBoxAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // prevent constructor by default
    MeleeBoxAttackGoal& operator=(MeleeBoxAttackGoal const&);
    MeleeBoxAttackGoal(MeleeBoxAttackGoal const&);
    MeleeBoxAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeBoxAttackGoal() = default;

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit MeleeBoxAttackGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI void tick$();

    // NOLINTEND
};
