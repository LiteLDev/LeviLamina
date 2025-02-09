#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkGoal.h"

// auto generated forward declare list
// clang-format off
class WorkComposterDefinition;
// clang-format on

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::WorkComposterDefinition> mDefinition;
    ::ll::TypedStorage<4, 4, int>                         mTimesComposted;
    ::ll::TypedStorage<8, 8, uint64>                      mNextUseTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 18
    virtual void useWorkstation() /*override*/;

    // vIndex: 0
    virtual ~WorkComposterGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tryCompostItems();

    MCAPI bool _tryEmptyComposter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $useWorkstation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
