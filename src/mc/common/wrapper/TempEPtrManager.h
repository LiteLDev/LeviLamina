#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrManager {
public:
    // prevent constructor by default
    TempEPtrManager& operator=(TempEPtrManager const&);
    TempEPtrManager(TempEPtrManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TempEPtrManager@@QEAA@XZ
    MCAPI TempEPtrManager();

    // symbol: ?registerTemporaryPointer@TempEPtrManager@@QEAAXAEAV_TickPtr@@@Z
    MCAPI void registerTemporaryPointer(class _TickPtr&);

    // symbol: ?tickTemporaryPointers@TempEPtrManager@@QEAAXXZ
    MCAPI void tickTemporaryPointers();

    // symbol: ?unregisterTemporaryPointer@TempEPtrManager@@QEAAXAEAV_TickPtr@@@Z
    MCAPI void unregisterTemporaryPointer(class _TickPtr&);

    // NOLINTEND
};
