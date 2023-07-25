#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptEventSignalAsync {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ISCRIPTEVENTSIGNALASYNC
public:
    IScriptEventSignalAsync& operator=(IScriptEventSignalAsync const&) = delete;
    IScriptEventSignalAsync(IScriptEventSignalAsync const&)            = delete;
    IScriptEventSignalAsync()                                          = delete;
#endif

public:
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
};

}; // namespace ScriptModuleMinecraft
