#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VexRandomMoveGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    VexRandomMoveGoal& operator=(VexRandomMoveGoal const&);
    VexRandomMoveGoal(VexRandomMoveGoal const&);
    VexRandomMoveGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~VexRandomMoveGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
