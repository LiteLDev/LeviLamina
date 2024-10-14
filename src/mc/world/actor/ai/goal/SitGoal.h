#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SitGoal : public ::Goal {
public:
    // prevent constructor by default
    SitGoal& operator=(SitGoal const&);
    SitGoal(SitGoal const&);
    SitGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SitGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit SitGoal(class Mob& mob);

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

    // NOLINTEND
};
