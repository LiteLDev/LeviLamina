#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

class MoveTowardsDwellingRestrictionGoal : public ::MoveTowardsRestrictionGoal {
public:
    // prevent constructor by default
    MoveTowardsDwellingRestrictionGoal& operator=(MoveTowardsDwellingRestrictionGoal const&);
    MoveTowardsDwellingRestrictionGoal(MoveTowardsDwellingRestrictionGoal const&);
    MoveTowardsDwellingRestrictionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsDwellingRestrictionGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit MoveTowardsDwellingRestrictionGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    // NOLINTEND
};
