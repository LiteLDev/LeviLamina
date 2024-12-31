#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class TeleportToOwnerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke42775;
    ::ll::UntypedStorage<8, 64> mUnka279e6;
    ::ll::UntypedStorage<4, 4>  mUnk96888f;
    ::ll::UntypedStorage<8, 8>  mUnka3bb80;
    ::ll::UntypedStorage<4, 12> mUnkcb8539;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportToOwnerGoal& operator=(TeleportToOwnerGoal const&);
    TeleportToOwnerGoal(TeleportToOwnerGoal const&);
    TeleportToOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~TeleportToOwnerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
