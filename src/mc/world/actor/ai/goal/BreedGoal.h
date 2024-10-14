#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BreedGoal : public ::Goal {
public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&);
    BreedGoal(BreedGoal const&);
    BreedGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BreedGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI BreedGoal(class Mob& animal, float speed);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isCloseEnoughToBreed(class Vec3 pos1, class Vec2 size1, class Vec3 pos2, class Vec2 size2) const;

    MCAPI class Mob* _moveToFreePartner() const;

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

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
