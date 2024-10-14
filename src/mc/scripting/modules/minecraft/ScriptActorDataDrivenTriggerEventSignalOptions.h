#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDataDrivenTriggerEventSignalOptions {
public:
    // prevent constructor by default
    ScriptActorDataDrivenTriggerEventSignalOptions& operator=(ScriptActorDataDrivenTriggerEventSignalOptions const&);
    ScriptActorDataDrivenTriggerEventSignalOptions(ScriptActorDataDrivenTriggerEventSignalOptions const&);
    ScriptActorDataDrivenTriggerEventSignalOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions&&);

    MCAPI ~ScriptActorDataDrivenTriggerEventSignalOptions();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
