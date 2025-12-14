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
    virtual void start() /*override*/;

    virtual void useWorkstation() /*override*/;

    virtual ~WorkComposterGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tryCompostItems();

    MCAPI bool _tryEmptyComposter();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
