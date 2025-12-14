#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    ::ll::TypedStorage<4, 4, int> mSearchCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool findTargetBlock();

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual ~BaseMoveToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $findTargetBlock();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $_moveToBlock();


    // NOLINTEND
};
