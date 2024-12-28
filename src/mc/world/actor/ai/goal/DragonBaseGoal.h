#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class DragonBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5480ed;
    ::ll::UntypedStorage<4, 4> mUnkb034aa;
    ::ll::UntypedStorage<4, 4> mUnk652307;
    ::ll::UntypedStorage<4, 4> mUnkd4a64d;
    ::ll::UntypedStorage<4, 8> mUnkd47736;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&);
    DragonBaseGoal(DragonBaseGoal const&);
    DragonBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonBaseGoal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
