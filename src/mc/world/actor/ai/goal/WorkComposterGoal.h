#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/WorkGoal.h"

class WorkComposterGoal : public ::WorkGoal {
public:
    // prevent constructor by default
    WorkComposterGoal& operator=(WorkComposterGoal const&);
    WorkComposterGoal(WorkComposterGoal const&);
    WorkComposterGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkComposterGoal() = default;

    // vIndex: 4
    virtual void start();

    // vIndex: 18
    virtual void useWorkstation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryCompostItems();

    MCAPI bool _tryEmptyComposter();

    // NOLINTEND
};
