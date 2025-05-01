#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk39ab08;
    ::ll::UntypedStorage<8, 56> mUnk5d0576;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerEventFilterData& operator=(ScriptDataDrivenActorTriggerEventFilterData const&);
    ScriptDataDrivenActorTriggerEventFilterData(ScriptDataDrivenActorTriggerEventFilterData const&);
    ScriptDataDrivenActorTriggerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDataDrivenActorTriggerEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
