#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class FertilizeFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    FertilizeFarmBlockGoal& operator=(FertilizeFarmBlockGoal const&);
    FertilizeFarmBlockGoal(FertilizeFarmBlockGoal const&);
    FertilizeFarmBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FertilizeFarmBlockGoal() = default;

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

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    MCAPI explicit FertilizeFarmBlockGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool tryFertilizeCrop(class BlockSource& region, class BlockPos const& farmlandPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _findFertilizer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
