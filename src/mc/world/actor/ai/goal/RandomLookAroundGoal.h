#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomLookAroundGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb16298;
    ::ll::UntypedStorage<4, 4> mUnk3eac08;
    ::ll::UntypedStorage<4, 4> mUnk134092;
    ::ll::UntypedStorage<4, 4> mUnkc1fd3e;
    ::ll::UntypedStorage<4, 4> mUnk7b1e45;
    ::ll::UntypedStorage<8, 8> mUnkccc90e;
    ::ll::UntypedStorage<4, 4> mUnkaab356;
    ::ll::UntypedStorage<4, 4> mUnk5ebce6;
    ::ll::UntypedStorage<4, 4> mUnk78ac64;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomLookAroundGoal& operator=(RandomLookAroundGoal const&);
    RandomLookAroundGoal(RandomLookAroundGoal const&);
    RandomLookAroundGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RandomLookAroundGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomLookAroundGoal(
        ::Mob& mob,
        int    minLookTime,
        int    maxLookTime,
        float  minAngleOfView,
        float  maxAngleOfView,
        float  probability
    );

    MCAPI void _setRandomLook();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, int minLookTime, int maxLookTime, float minAngleOfView, float maxAngleOfView, float probability);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
