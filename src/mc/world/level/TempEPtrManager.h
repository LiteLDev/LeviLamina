#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrManager {
public:
    // prevent constructor by default
    TempEPtrManager& operator=(TempEPtrManager const&);
    TempEPtrManager(TempEPtrManager const&);

public:
    // NOLINTBEGIN
    MCAPI TempEPtrManager();

    MCAPI void registerTemporaryPointer(class _TickPtr& ptr);

    MCAPI void tickTemporaryPointers();

    MCAPI void unregisterTemporaryPointer(class _TickPtr& ptr);

    // NOLINTEND
};
