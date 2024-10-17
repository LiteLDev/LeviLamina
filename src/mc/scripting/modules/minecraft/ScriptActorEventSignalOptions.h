#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorEventSignalOptions {
public:
    // prevent constructor by default
    ScriptActorEventSignalOptions();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&);

    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&);

    MCAPI ~ScriptActorEventSignalOptions();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
