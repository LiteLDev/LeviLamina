#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class InspectBookshelfGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    InspectBookshelfGoal& operator=(InspectBookshelfGoal const&);
    InspectBookshelfGoal(InspectBookshelfGoal const&);
    InspectBookshelfGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InspectBookshelfGoal() = default;

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 13
    virtual bool _canReach(class BlockPos const& pos);

    // vIndex: 17
    virtual bool findTargetBlock();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _canReach$(class BlockPos const& pos);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool findTargetBlock$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void tick$();

    // NOLINTEND
};
