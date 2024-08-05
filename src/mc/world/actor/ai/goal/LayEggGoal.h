#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    LayEggGoal& operator=(LayEggGoal const&);
    LayEggGoal(LayEggGoal const&);
    LayEggGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LayEggGoal() = default;

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
    virtual bool findTargetBlock();

    MCAPI
    LayEggGoal(class Mob& mob, float speedModifier, int searchRange, int searchHeight, float goalRadius, std::vector<class ItemDescriptor> const& targetBlocks, std::vector<::MaterialType> const&, bool, bool, float, class ItemDescriptor const&, class ActorDefinitionTrigger const& onLay, std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _isTargetBlock(class BlockLegacy const& block) const;

    MCAPI void _layEgg(class BlockPos const& pos);

    // NOLINTEND
};
