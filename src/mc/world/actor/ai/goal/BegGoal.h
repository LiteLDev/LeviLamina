#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BegGoal : public ::Goal {
public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&);
    BegGoal(BegGoal const&);
    BegGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BegGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI BegGoal(
        class Mob&                               tamableAnimal,
        std::vector<class ItemDescriptor> const& itemList,
        float                                    lookDistance,
        int                                      minLookTime,
        int                                      maxLookTime
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _playerHoldingInteresting(class Player* player);

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

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
