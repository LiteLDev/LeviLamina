#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToLavaGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToLavaGoal& operator=(MoveToLavaGoal const&);
    MoveToLavaGoal(MoveToLavaGoal const&);
    MoveToLavaGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToLavaGoal() = default;

    MCAPI MoveToLavaGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
