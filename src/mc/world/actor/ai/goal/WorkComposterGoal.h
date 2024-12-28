#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkGoal.h"

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnk7bdd4b;
    ::ll::UntypedStorage<4, 4>   mUnk461d40;
    ::ll::UntypedStorage<8, 8>   mUnk625da6;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkComposterGoal& operator=(WorkComposterGoal const&);
    WorkComposterGoal(WorkComposterGoal const&);
    WorkComposterGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 18
    virtual void useWorkstation() /*override*/;

    // vIndex: 0
    virtual ~WorkComposterGoal() /*override*/;
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
    MCAPI void $dtor();
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
