#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class InspectBookshelfGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBookshelfPos;
    ::ll::TypedStorage<1, 1, bool>        mRequireSameY;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual bool findTargetBlock() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool _canReach(::BlockPos const& pos) /*override*/;

    virtual ~InspectBookshelfGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI bool $findTargetBlock();

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $_canReach(::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
