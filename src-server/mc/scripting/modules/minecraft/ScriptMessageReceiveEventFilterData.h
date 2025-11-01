#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd8faf8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilterData& operator=(ScriptMessageReceiveEventFilterData const&);
    ScriptMessageReceiveEventFilterData(ScriptMessageReceiveEventFilterData const&);
    ScriptMessageReceiveEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptMessageReceiveEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
