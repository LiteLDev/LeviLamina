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
    IScriptEventSignalAsync& operator=(IScriptEventSignalAsync const&) = delete;
    IScriptEventSignalAsync(IScriptEventSignalAsync const&)            = delete;
    IScriptEventSignalAsync()                                          = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_ISCRIPTEVENTSIGNALASYNC
    /**
     * @symbol
     * ?enqueueClosureRemovalForActor\@IScriptEventSignalAsync\@ScriptModuleMinecraft\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    MCVAPI void enqueueClosureRemovalForActor(struct ActorUniqueID);
    /**
     * @symbol ?isActorSignal\@IScriptEventSignalAsync\@ScriptModuleMinecraft\@\@UEAA_NXZ
     */
    MCVAPI bool isActorSignal();
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
