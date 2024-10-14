#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToVillageGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    MoveToVillageGoal& operator=(MoveToVillageGoal const&);
    MoveToVillageGoal(MoveToVillageGoal const&);
    MoveToVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToVillageGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock();

    // vIndex: 17
    virtual class BlockPos _selectRandomPosInVillage();

    MCAPI MoveToVillageGoal(class Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class Village> _tryGetCurrentVillage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _moveToBlock$();

    MCAPI class BlockPos _selectRandomPosInVillage$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void start$();

    MCAPI void tick$();

    // NOLINTEND
};
