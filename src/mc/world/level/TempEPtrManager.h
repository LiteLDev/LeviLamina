#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class _TickPtr;
// clang-format on

class TempEPtrManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfdd00e;
    // NOLINTEND

public:
    // prevent constructor by default
    TempEPtrManager& operator=(TempEPtrManager const&);
    TempEPtrManager(TempEPtrManager const&);
    TempEPtrManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void unregisterTemporaryPointer(::_TickPtr& ptr);
    // NOLINTEND
};
