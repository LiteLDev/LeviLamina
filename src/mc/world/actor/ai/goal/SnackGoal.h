#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SnackGoal : public ::Goal {
public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&);
    SnackGoal(SnackGoal const&);
    SnackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnackGoal() = default;

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

    // vIndex: 10
    virtual int getRandomEatingEnd() const;

    MCAPI SnackGoal(
        class Mob&                               mob,
        std::vector<class ItemDescriptor> const& itemList,
        float                                    cooldown,
        float                                    min,
        float                                    stopChance
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _hasSnackableItems();

    MCAPI bool _isSnackableItem(class ItemStack const& item) const;

    MCAPI void _updateHand(class ItemStack const& item);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const CHEW_CHANCE;

    MCAPI static int const EATING_TIME;

    MCAPI static float const PATH_RANGE;

    MCAPI static int const RANDOM_EATING_END;

    MCAPI static int const RANDOM_EATING_START;

    MCAPI static float const SEARCH_SIZE;

    MCAPI static float const STOP_DIST_SQRD;

    // NOLINTEND
};
