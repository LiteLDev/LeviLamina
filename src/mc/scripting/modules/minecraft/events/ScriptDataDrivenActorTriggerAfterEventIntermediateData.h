#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk9c98f3;
    ::ll::UntypedStorage<8, 32> mUnka69c2a;
    ::ll::UntypedStorage<8, 24> mUnkc797b4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEventIntermediateData&
    operator=(ScriptDataDrivenActorTriggerAfterEventIntermediateData const&);
    ScriptDataDrivenActorTriggerAfterEventIntermediateData(ScriptDataDrivenActorTriggerAfterEventIntermediateData const&);
    ScriptDataDrivenActorTriggerAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDataDrivenActorTriggerAfterEventIntermediateData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
