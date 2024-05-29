#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptEventSignalAsync {
public:
    // prevent constructor by default
    IScriptEventSignalAsync& operator=(IScriptEventSignalAsync const&);
    IScriptEventSignalAsync(IScriptEventSignalAsync const&);
    IScriptEventSignalAsync();

public:
    // NOLINTBEGIN
    // symbol: ?enqueueClosureRemovalForActor@IScriptEventSignalAsync@ScriptModuleMinecraft@@UEAAXAEBUActorUniqueID@@@Z
    MCVAPI void enqueueClosureRemovalForActor(struct ActorUniqueID const&);

    // symbol: ?isActorSignal@IScriptEventSignalAsync@ScriptModuleMinecraft@@UEBA_NXZ
    MCVAPI bool isActorSignal() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
