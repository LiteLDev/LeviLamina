#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class CircleAroundAnchorGoal : public ::Goal {
public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CircleAroundAnchorGoal() = default;

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

    MCAPI explicit CircleAroundAnchorGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _calculateHeightOffset() const;

    MCAPI void _selectNext();

    MCAPI void _setAnchorAboveTarget();

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

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
