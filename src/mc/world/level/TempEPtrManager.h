#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/_TickPtr.h"

class TempEPtrManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::_TickPtr*>> mTempTickPointers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TempEPtrManager();

    MCNAPI void registerTemporaryPointer(::_TickPtr& ptr);

    MCNAPI void tickTemporaryPointers();

    MCNAPI void unregisterTemporaryPointer(::_TickPtr& ptr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
