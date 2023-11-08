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
    // vIndex: 0, symbol: __gen_??1WorkComposterGoal@@UEAA@XZ
    virtual ~WorkComposterGoal() = default;

    // vIndex: 4, symbol: ?start@WorkComposterGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 18, symbol: ?useWorkstation@WorkComposterGoal@@UEAAXXZ
    virtual void useWorkstation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryCompostItems@WorkComposterGoal@@AEAA_NXZ
    MCAPI bool _tryCompostItems();

    // symbol: ?_tryEmptyComposter@WorkComposterGoal@@AEAA_NXZ
    MCAPI bool _tryEmptyComposter();

    // NOLINTEND
};
