#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkComposterDefinition.h"
#include "mc/world/actor/ai/goal/WorkGoal.h"

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::WorkComposterDefinition> mDefinition;
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
    MCNAPI bool _tryCompostItems();

    MCNAPI bool _tryEmptyComposter();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI void $useWorkstation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
