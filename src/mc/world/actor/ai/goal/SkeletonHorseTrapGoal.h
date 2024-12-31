#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Horse;
class Skeleton;
// clang-format on

class SkeletonHorseTrapGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk789df2;
    ::ll::UntypedStorage<4, 4> mUnk36b10a;
    ::ll::UntypedStorage<4, 4> mUnk629f69;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& debugInfo) const /*override*/;

    // vIndex: 0
    virtual ~SkeletonHorseTrapGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkeletonHorseTrapGoal(::Horse& mob, int trapLifeTicks, float triggerDistance);

    MCAPI ::Horse* _createHorse(::Difficulty const& difficulty);

    MCAPI ::Skeleton* _createSkeleton(::Difficulty const& difficulty, ::Horse const& otherHorse);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Horse& mob, int trapLifeTicks, float triggerDistance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();

    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& debugInfo) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
