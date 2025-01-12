#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class CircleAroundAnchorGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc373af;
    ::ll::UntypedStorage<4, 4>  mUnk7cdbed;
    ::ll::UntypedStorage<4, 4>  mUnk6918c5;
    ::ll::UntypedStorage<4, 4>  mUnk17c812;
    ::ll::UntypedStorage<4, 4>  mUnk58f32f;
    ::ll::UntypedStorage<4, 4>  mUnkaf0bf9;
    ::ll::UntypedStorage<4, 4>  mUnk9cdfb5;
    ::ll::UntypedStorage<4, 8>  mUnkc4dbb9;
    ::ll::UntypedStorage<4, 8>  mUnk212eb8;
    ::ll::UntypedStorage<4, 8>  mUnk3eeba3;
    ::ll::UntypedStorage<4, 4>  mUnk8b5ecb;
    ::ll::UntypedStorage<4, 4>  mUnk8e4674;
    ::ll::UntypedStorage<4, 4>  mUnkd3ae4d;
    ::ll::UntypedStorage<4, 4>  mUnk42fc81;
    ::ll::UntypedStorage<4, 12> mUnk9c21e6;
    // NOLINTEND

public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~CircleAroundAnchorGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CircleAroundAnchorGoal(::Mob& mob);

    MCAPI void _selectNext();

    MCAPI void _setAnchorAboveTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $stop();

    MCFOLD bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
