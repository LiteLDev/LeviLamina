#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
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
    virtual void appendDebugInfo(std::string&) const;

    MCAPI explicit MeleeBoxAttackGoal(class Mob&);

    // NOLINTEND
};
