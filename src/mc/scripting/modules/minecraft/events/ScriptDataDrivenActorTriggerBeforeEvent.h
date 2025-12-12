#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk62b8ec;
    ::ll::UntypedStorage<8, 32> mUnkcaaaa6;
    ::ll::UntypedStorage<1, 1>  mUnkb4f60c;
    ::ll::UntypedStorage<8, 8>  mUnk3c0d54;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerBeforeEvent& operator=(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent();
};

} // namespace ScriptModuleMinecraft
